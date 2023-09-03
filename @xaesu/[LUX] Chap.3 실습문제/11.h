#pragma once
#include <iostream>
using namespace std;

// 클래스 선언부
class Box {
	int width, height;
	char fill;

public:
	Box(int w, int h);
	void setFill(char f);
	void setSize(int w, int h);
	void draw();
};

// 클래스 구현부
Box::Box(int w, int h) {
	setSize(w, h);
	fill = '*';
}
void Box::setFill(char f) {
	fill = f;
}
void Box::setSize(int w, int h) {
	width = w; 	height = h;
}

void Box::draw() {
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) 
			cout << fill;
		cout << endl;
	}
}
#pragma once
#include <iostream>
using namespace std;

// 주어진 사각형에 내접하는 타원을 추상화한 클래스
class Oval {
    int width, height;

public:
    // 생성자
    Oval(int w, int h);
    Oval();

    // 소멸자
    ~Oval();

    // 멤버 함수
    int getWidth();
    int getHeight();
    void set(int a, int b);
    void show();
};

Oval::Oval(int w, int h) {
    width = w;
    height = h;
}

Oval::Oval() {
    width = 1;
    height = 1;
}

Oval::~Oval() {
    cout << "Oval 소멸 : width = " << width << ", height = " << height << endl;
}

int Oval::getWidth() {
    return width;
}

int Oval::getHeight() {
    return height;
}

void Oval::set(int a, int b) {
    width = a;
    height = b;
}

void Oval::show() {
    cout << "width = " << width << ", height = " << height << endl;
}
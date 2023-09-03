#pragma once
#include <iostream>
using namespace std;

class Add {
	int a; 	int b;

public:
	void setValue(int x, int y) {
		a = x; b = y;
	}
	void calculate() {
		cout << a + b << endl;
	}
};

class Sub {
	int a; 	int b;
public:
	void setValue(int x, int y) {
		a = x; b = y;
	}
	void calculate() {
		cout << a - b << endl;
	}
};

class Mul {
	int a; 	int b;
public:
	void setValue(int x, int y) {
		a = x; b = y;
	}
	void calculate() {
		cout << a * b << endl;
	}
};

class Div {
	int a; 	int b;
public:
	void setValue(int x, int y) {
		a = x; b = y;
	}
	void calculate() {
		if (b) cout << a / b << endl;
		else {
			cout << "잘못된 입력입니다." << endl;
			return;
		}
	}
};
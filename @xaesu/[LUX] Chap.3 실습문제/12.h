#pragma once
#include <iostream>
using namespace std;

// 클래스 선언부
class Ram {
	char mem[100 * 1024];
	int size;

public:
	Ram();
	~Ram();
	char read(int address);
	void write(int address, char value);
};

// 클래스 구현부
Ram::Ram() {
	mem[100 * 1024] = {};
	size = 100 * 1024;
}

Ram::~Ram() {
	cout << "메모리 제거됨" << endl;
}

char Ram::read(int address) {
	return mem[address];
}
void Ram::write(int address, char value) {
	mem[address] = value;
}
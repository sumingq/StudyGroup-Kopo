#pragma once
#include <iostream>
using namespace std;

#include <string>
#include <cstring>

// 정수를 객체화한 클래스
class Integer {
    int num;

public:
    Integer(int n) {
        num = n;
    }

    Integer(string s) {
        num = stoi(s);
    }

    int get() { return num; }
    
    void set(int n) { num = n; }

    int isEven() {
        if (num % 2) return 0;
        else return 1;
    }
};
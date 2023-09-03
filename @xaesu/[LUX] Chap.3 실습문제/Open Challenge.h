#pragma once
#include <iostream>
using namespace std;

// 지수를 표현하는 클래스 만들기
class Exp {
    int base, exp;

public:
    Exp() { base = 1; exp = 1; }
    Exp(int a) { base = a; }
    Exp(int a, int b) { base = a, exp = b; }

    int getValue() {
        int result = 1;

        for (int i = 0; i < exp; i++)
            result *= base;

        return result;
    }

    int getBase() {
        return base;
    }

    int getExp() {
        return exp;
    }

    bool equals(Exp b) {
        if (getValue() == b.getValue()) return 0;
        else return 1;
    }
};
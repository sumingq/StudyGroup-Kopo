#pragma once
#include <iostream>
using namespace std;

#include <cstdlib>
#include <time.h>

// 랜덤 수를 발생시키는 클래스
class Random {
    bool isEven;

public:
    Random() {
        srand((unsigned)time(NULL));    // 매 실행마다 다른 랜덤 패턴 생성
    }

    Random(int a, int b) {
        srand((unsigned)time(NULL));    // 매 실행마다 다른 랜덤 패턴 생성
    }

    int next() {
        int n;

        do {
            n = rand();
        } while (n % 2); 

        return n;
    }

    int nextInRange(int a, int b) {
        int n;

        do {
            n = rand() % (b - a + 1) + a;
        } while (n % 2);

        return n;
    }
};
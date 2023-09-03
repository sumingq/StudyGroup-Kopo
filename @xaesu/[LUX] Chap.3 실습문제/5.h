#pragma once
#include <iostream>
using namespace std;

#include <cstdlib>
#include <time.h>

// 랜덤 수를 발생시키는 클래스
class Random {
public:
    Random() {
        srand((unsigned)time(NULL));    // 매 실행마다 다른 랜덤 패턴 생성
    }

    int next() {
        return rand();
    }

    int nextInRange(int a, int b) {
        return rand() % (b - a + 1) + a;
    }
};
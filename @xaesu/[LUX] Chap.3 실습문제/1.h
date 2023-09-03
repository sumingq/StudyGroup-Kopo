#pragma once

#include <iostream>
using namespace std;

// 타워 높이를 출력하는 클래스
class Tower {
    int Height;

public:
    Tower() { Height = 1; }
    Tower(int a) { Height = a; }

    int getHeight() {
        return Height;
    }
};
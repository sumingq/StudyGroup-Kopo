#pragma once
#include <iostream>
using namespace std;

#include <string>
#include <cstring>

// 입력 정보에 따라 날짜 정보를 표시하는 클래스
class Date {
    int year, month, day;

public:
    Date(int a, int b, int c) {
        year = a;
        month = b;
        day = c;
    }

    Date(string Date) {
        year = stoi(Date.substr(0, 4));
        month = stoi(Date.substr(5, 2));
        day = stoi(Date.substr(7, 2));
    }

    int getYear() {
        return year;
    }

    int getMonth() {
        return month;
    }

    int getDay() {
        return day;
    }

    void show() {
        cout << year << "년" << month << "월" << day << "일" << endl;
    }
};
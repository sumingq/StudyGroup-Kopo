#pragma once
#include <iostream>
using namespace std;

#include <string>
#include <cstring>

// 은행 계좌를 표현하는 클래스
class Account {
    string owner;
    int id, balance;

public:
    Account(string name, int i, int b) {
        owner = name;
        id = i;
        balance = b;
    }

    int deposit(int d){
        return balance += d;
    }

    int withdraw(int w) {
        return balance -= w;
    }

    string getOwner() {
        return owner;
    }

    int inquiry() {
        return balance;
    }
};
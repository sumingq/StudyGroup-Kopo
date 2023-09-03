#pragma once
#include <iostream>
using namespace std;

#include <iomanip>

// 커피 머신 상태를 나타내는 클래스
class CoffeeMachine {
    int coffee, water, sugar;
    
public:
    CoffeeMachine(int a, int b, int c) {
        coffee = a;
        water = b;
        sugar = c;
    }

    void drinkEspresso() {
        coffee -= 1;
        water -= 1;
    }

    void drinkAmericano() {
        coffee -= 1;
        water -= 2;
    }

    void drinkSugarCoffee() {
        coffee -= 1;
        water -= 2;
        sugar -= 1;
    }

    void fill() {
        coffee = 10;
        water = 10;
        sugar = 10;
    }

    void show() {
        cout << "커피 머신 상태, 커피 :" << setw(2) << left << coffee << " 물:" << setw(2) << water << " 설탕:" << setw(2) << sugar << endl;
    }
};
#include <iostream>
using namespace std;
#include "Tower.h"

int main() {
	Tower myTower; // 1����
	Tower seoulTower(100); //100����

	cout << "���̴� " << myTower.getHeight() << "����" << endl;
	cout << "���̴� " << seoulTower.getHeight() << "����" << endl;
}
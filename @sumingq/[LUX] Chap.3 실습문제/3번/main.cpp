#include <iostream>
#include "Account.h"
using namespace std;

int main() {
	Account a("kitae", 1, 5000); 	// id 1��, �ܾ� 5000��, �̸��� kitae�� ���� ����
	a.deposit(50000);				// 20000�� ����
	cout << a.getOwner() << "�� �ܾ��� " << a.inquiry() << endl;
	int money = a.withdraw(20000);	// 20000�� ���. withdraw()�� ����� ���� �ݾ� ����
	cout << a.getOwner() << "�� �ܾ��� " << a.inquiry() << endl;
}
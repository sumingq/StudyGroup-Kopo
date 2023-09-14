#include "Account.h"
#include <string>

Account::Account(string n, int i, int bal) {
	name = n;
	id = i;
	balance = bal;
}

void Account::deposit(int money) {
	balance += money; //balance += 5000 => balance = 55000
}

string Account::getOwner() {
	return name;
}

int Account::inquiry() {
	return balance;
}

int Account::withdraw(int money) {
	if (balance >= money) {
		balance -= money;
	}
	else { // �ܾ��� 55000���ε� 60000��(money) ��� ��û
		// money = 55000��, ����� ���� �ܾ����� �����ϰ�
		money = balance;
		// �ܾ��� 0������ �����
		balance = 0;
	}
	return money;
}
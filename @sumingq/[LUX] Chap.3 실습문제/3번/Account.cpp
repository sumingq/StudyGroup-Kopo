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
	else { // 잔액이 55000원인데 60000원(money) 출금 요청
		// money = 55000원, 출금할 돈을 잔액으로 변경하고
		money = balance;
		// 잔액을 0원으로 만들기
		balance = 0;
	}
	return money;
}
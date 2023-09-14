#pragma once
#include <string>
using namespace std;

class Account {
	string name;
	int id;
	int balance;
public :
	Account(string n, int i, int bal);
	string getOwner(); //{ return name; }
	void deposit(int money); //입금
	int withdraw(int money); //인출
	int inquiry(); //조회
};
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
	void deposit(int money); //�Ա�
	int withdraw(int money); //����
	int inquiry(); //��ȸ
};
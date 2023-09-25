#include <iostream>
using namespace std;

class Circle {
	int radius;
public :
	Circle(int radius) {
		this->radius = radius;
	}
	double getArea() {
		return 3.14 * radius * radius;
	}
};

void swap(Circle& a, Circle& b) {
	Circle tmp(1);
	tmp = a;
	a = b;
	b = tmp;
}


int main() {
	Circle a(2), b(3);
	cout << a.getArea() << ' ' << b.getArea() << endl;
	swap(a, b);
	cout << a.getArea() << ' ' << b.getArea() << endl;
}
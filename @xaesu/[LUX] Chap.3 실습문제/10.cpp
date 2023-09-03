#include "10.h"

int main()
{
    // 사칙 연산 클래스의 객체 생성
     Add a; Sub s; Mul m; Div d;

    int n1, n2;
    char op;

    while (1) {

        cout << "두 정수와 연산자를 입력하세요>>";
        cin >> n1 >> n2 >> op;

        switch (op) {
        case '+':
            a.setValue(n1, n2);
            a.calculate();
            break;
        case '-':
            s.setValue(n1, n2);
            s.calculate();
            break;
        case '*':
            m.setValue(n1, n2);
            m.calculate();
            break;
        case '/':
            d.setValue(n1, n2);
            d.calculate();
            break;
        }
    }
}
#include <iostream>
#include <string>
using namespace std;
#include <cstdlib>
#include <ctime>

int main() {
	string str;

	cout << "�Ʒ��� �� ���� �Է��ϼ���.(exit�� �Է��ϸ� �����մϴ�)" << endl;
	
	while (1) {
		cout << ">>";
		getline(cin, str);

		// exit�� �ԷµǸ� ���α׷� ����
		if (str == "exit") break;

		// exit�� �ƴ� ���� �ԷµǸ� 
		else {
			// �Է¹��� ���� ���� len ������ ����
			int len = str.length();
			// ���� �ϳ��� �����ϰ� �����Ͽ� ��� 
			srand((unsigned)time(0));
			// n�� 0���� len-1������ ������ �� ����
			int n = rand() % len;

			srand((unsigned)time(0));
			// ���� ���ڿ� ���� �ʰ�, 'A'~'Z'(65~90) && 'a'~'z'(97~122) ������ ��
			int alpha;
			if (rand() % 2 == 0) {
				// 50% Ȯ���� �빮�� ���ĺ� ���� (65���� 90 ����)
				alpha = rand() % 26 + 65;
			}
			else {
				// ������ 50% Ȯ���� �ҹ��� ���ĺ� ���� (97���� 122 ����)
				alpha = rand() % 26 + 97;
			}
			str[n] = alpha; // ������ ���ĺ����� ��ġ
			cout << str << endl;
		}
	}
}
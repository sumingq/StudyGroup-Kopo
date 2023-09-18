#include <iostream>
#include <string>
using namespace std;
#include <cstdlib>
#include <ctime>

int main() {
	string str;

	cout << "아래에 한 줄을 입력하세요.(exit를 입력하면 종료합니다)" << endl;
	
	while (1) {
		cout << ">>";
		getline(cin, str);

		// exit가 입력되면 프로그램 종료
		if (str == "exit") break;

		// exit가 아닌 값이 입력되면 
		else {
			// 입력받은 문자 길이 len 변수에 저장
			int len = str.length();
			// 글자 하나만 랜덤하게 수정하여 출력 
			srand((unsigned)time(0));
			// n에 0부터 len-1까지의 랜덤한 값 저장
			int n = rand() % len;

			srand((unsigned)time(0));
			// 현재 문자와 같지 않고, 'A'~'Z'(65~90) && 'a'~'z'(97~122) 사이의 값
			int alpha;
			if (rand() % 2 == 0) {
				// 50% 확률로 대문자 알파벳 선택 (65에서 90 사이)
				alpha = rand() % 26 + 65;
			}
			else {
				// 나머지 50% 확률로 소문자 알파벳 선택 (97에서 122 사이)
				alpha = rand() % 26 + 97;
			}
			str[n] = alpha; // 랜덤한 알파벳으로 대치
			cout << str << endl;
		}
	}
}
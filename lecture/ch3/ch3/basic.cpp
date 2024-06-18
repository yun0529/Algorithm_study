#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

// 주석을 처음에 추가해서 어떤걸 구현해야 하는지 먼저 작성
// 코드를 바로 작성하려 하지 말고 코드를 해석해라 + 손코딩도 조금 해보고
// 코드 작성
// ex. 완전 탐색 -> brute-force 이런걸로 무식하게 푸는 것도 괜찮음. 그 다음에 특정 알고리즘들을 사용할 생각해라.
// 제출하기 전 반례가 있는지 없는지 생각해라.
// 
string dopa = "abcde";

int main() {
	// 앞 3개만 출력
	cout << dopa.substr(0, 3) << '\n';
	// 거꾸로 출력
	reverse(dopa.begin(), dopa.end());
	cout << dopa << '\n';
	// 뒤에 특정 문자열 붙여서 출력
	cout << dopa + "umzunsik" << '\n';
	return 0;
}
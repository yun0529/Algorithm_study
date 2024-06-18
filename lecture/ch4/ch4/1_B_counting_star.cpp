//// 백준 10808
//// 카운팅을 한다고 하면 맵 또는 배열이 생각나야함
//// string 이면 맵, int 면 배열이 좋음 -> but. int라도 주어지는 요소가 10, 100, 1000 이런식으로 띄엄띄엄 들어온다면 맵을 쓴다.
//// 이 문제는 문자열을 기반으로 문자를 카운트 하는 것. -> 문자는 아스키코드로 숫자로 나타낼 수 있음.
//#include <bits/stdc++.h>
//using namespace std;
//
//int cnt[26];
//
//int main() { 
//
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	string str;
//	cin >> str;
//
//	for (char a : str) { // 문자에 해당하는 배열 위치 ++ 
//		cnt[a - 'a']++;
//	}
//
//	for (int i = 0; i < 26; i++) {
//		cout << cnt[i] << " ";
//	}
//
//	return 0;
//}
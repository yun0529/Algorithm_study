//#include <bits/stdc++.h>
//using namespace std;
//
///*
// * 1-G : 백준 9996
// * ab * ab 일 때 * 부분에는 한글자가 아니라 여러 글자가 들어올 수 있다.
// */
//
//int n;
//string s, ori_s, pre, suf;
//
//int main() {
//
//	cin >> n;
//	cin >> ori_s;
//	int pos = ori_s.find('*');
//	pre = ori_s.substr(0, pos);
//	suf = ori_s.substr(pos + 1);
//
//	for (int i = 0; i < n; i++) {
//		cin >> s;
//		if (pre.size() + suf.size() > s.size()) { // 이름이 패턴보다 짧으면 안됨.
//			cout << "NE\n";
//		}
//		else {
//			if (pre == s.substr(0, pre.size()) && suf == s.substr(s.size() - suf.size())) { // 패턴 앞자리와 뒷자리가 같다면 DA 출력
//				cout << "DA\n";
//			}
//			else {
//				cout << "NE\n";
//			}
//		}
//	}
//
//	return 0;
//}
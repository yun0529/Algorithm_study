//#include <bits/stdc++.h>
//using namespace std;
//
///*
// * 1-G : ���� 9996
// * ab * ab �� �� * �κп��� �ѱ��ڰ� �ƴ϶� ���� ���ڰ� ���� �� �ִ�.
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
//		if (pre.size() + suf.size() > s.size()) { // �̸��� ���Ϻ��� ª���� �ȵ�.
//			cout << "NE\n";
//		}
//		else {
//			if (pre == s.substr(0, pre.size()) && suf == s.substr(s.size() - suf.size())) { // ���� ���ڸ��� ���ڸ��� ���ٸ� DA ���
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
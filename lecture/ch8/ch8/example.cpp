//#include <bits/stdc++.h>
//using namespace std;
//
//const int n = 4;
//string a[4] = { "���", "����", "����", "��" };
//
//void go(int num) {
//	string ret = "";
//	for (int i = 0; i < 4; i++) {
//		// �����ִ� ��Ʈ�� ���� ����
//		if (num & (1 << i)) ret += a[i] + " ";
//	}
//	cout << ret << '\n';
//	return;
//}
//
//int main() {
//
//	//string a[n] = { "���", "����", "����", "��" };
//	//for (int i = 0; i < (1 << n); i++) {
//	//	string ret = "";
//	//	for (int j = 0; j < n; j++) {
//	//		if (i & (1 << j)) {
//	//			ret += (a[j] + " ");
//	//		}
//	//	}
//	//	cout << ret << '\n';
//	//}
//
//	for (int i = 1; i < n; i++) {
//		// ��� (1)�� �����ϸ鼭 �ٸ� �迭 idx �ѱ�
//		go(1 | (1 << i)); 
//	}
//
//	return 0;
//}
//#include "bits/stdc++.h"
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

/*
- ���� ��� O -> ���� / ���� ��� X -> ����
- �������� ������ ���� ���ϸ� ������ �ذ�
  - ������ ���ġ �Ͽ� ...
  - ~ �� ������ ��� max ���� ...
- next_permutation�� �������� �迭�� ������� ���� ����
- prev_permutation�� �������� �迭�� ������� ���� ����
  - ���� sort ���� �ϰ� ���� �Լ� ȣ���ؾ���
- �������� ��Ÿ���� nPr = n!/(n-r)! ��
- next_permutation �Լ��� ������ ������ ù ��° ������ �缳���� ��� false�� ��ȯ�ϴ� �Լ���
- �׳� �������� ���� �� next_permutation�� ����Ѵ� ������ �ܿ�� ��
*/
//int main() {
//	//�迭�� ����ϴ� ���
//	int a[3] = { 1,2,3 };
//
//	do {
//		for (int i : a) cout << i << " ";
//		cout << "\n";
//	// �迭�� �ּҴ� ������ ���̵� ��� ���� ex. (a, a + 3) �Ǵ� (&a[0], &a[3])
//	} while (next_permutation(&a[0], &a[0] + 3)); 
//
//	cout << "\n----------\n";
//
//	// vector�� ����ϴ� ���
//	vector<int> v = { 2,3,1 };
//	sort(v.begin(), v.end());
//	do {
//		for (int i : v) cout << i << " ";
//		cout << "\n";
//	// �迭�� �ּҴ� ������ ���̵� ��� ���� ex. (v.begin(), v.begin() + 2)
//	} while (next_permutation(v.begin(),v.end())); 
//
//	return 0;
//}
// 0 -> ��Ʈ�� �����ִ�. 1 -> ��Ʈ�� �����ִ�.
// boolean �迭�� �������� ����
//  
// shift ������ ���� 1<< b �� ���·θ� ���ȴ�.
//  
//
#include <bits/stdc++.h>
using namespace std;

int main() {

	int a = 9;
	int b = 8;
	cout << (a & b) << '\n'; // AND ���� 

	cout << (a << b) << '\n'; // shift ���� 

	return 0;
}
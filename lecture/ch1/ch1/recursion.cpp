//#include "bits/stdc++.h" => iostream, vector, algorithm ��... �ʿ��Ѱ� ���� �� �����ϴ� ��� visual studio ������ ���� ���ؼ� �ٿ�޾Ƽ� ����
#include <iostream>
using namespace std;
/*
- Cycle�� �ִٸ� ����ϸ� �ȵ� (ex. f(a) -> f(b) -> f(a))
- �ݺ������� �����ϴٸ� �ݺ����� ����ϴ� ���� ���� 
- Ư�� ��Ȳ������ ��Ͱ� ������ �⺻������ �Լ� ȣ���� ���� ������ �ݺ����� �� ����
- ��ȭ���� �ڵ�� �ۼ��ϴ� ��
- ��������� �ǵ��Ѵ�� �Լ� ȣ���� �̷�������� Ȯ���ϸ� ����
*/

int fact_rec(int n) {
	// �������
	// ���� ���Ѿ� �ϴ��� ������ �Ǵ��ϰ� �����Ų��. -> ������͹���
	// ���� �帧�� ���� �ᱹ 1 �Ǵ� 0���� �ּҰ� �Ǳ� ������ �����Ű�� �ڵ尡 �ʿ�
	if (n == 1 || n == 0)return 1;
	return n * fact_rec(n - 1);
}

int fact_for(int n) {
	int ret = 1;
	for (int i = 1; i <= n; i++) {
		ret *= i;
	}
	return ret;
}

//int n = 5;
//int main() {
//	cout << fact_for(n) << "\n";
//	cout << fact_rec(n) << "\n";
//
//	return 0;
//}
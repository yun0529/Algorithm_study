#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

// �ּ��� ó���� �߰��ؼ� ��� �����ؾ� �ϴ��� ���� �ۼ�
// �ڵ带 �ٷ� �ۼ��Ϸ� ���� ���� �ڵ带 �ؼ��ض� + ���ڵ��� ���� �غ���
// �ڵ� �ۼ�
// ex. ���� Ž�� -> brute-force �̷��ɷ� �����ϰ� Ǫ�� �͵� ������. �� ������ Ư�� �˰������ ����� �����ض�.
// �����ϱ� �� �ݷʰ� �ִ��� ������ �����ض�.
// 
string dopa = "abcde";

int main() {
	// �� 3���� ���
	cout << dopa.substr(0, 3) << '\n';
	// �Ųٷ� ���
	reverse(dopa.begin(), dopa.end());
	cout << dopa << '\n';
	// �ڿ� Ư�� ���ڿ� �ٿ��� ���
	cout << dopa + "umzunsik" << '\n';
	return 0;
}
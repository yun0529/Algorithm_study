//#include <bits/stdc++.h>
//using namespace std;
//
//long long a, b, c;
//
//long long go(long long a, long long b) {
//	if (b == 1) return a % c; // �������
//
//	long long ret = go(a, b / 2); // a ^ 64�� a^32 * a^32�� ����. �̷������� ��� Ƚ���� ��� ����. O(log2 64) �̷��� �ȴ�.
//	ret = (ret * ret) % c; // ���� ret�� �ٽ� ���ϰ� ������ ���� ����
//
//	if (b % 2) ret = (ret * a) % c; // Ȧ���� ��� �ѹ� �� ���Ѵ� 2^5 == 2^2 * 2^2 * 2^1�̱� ����
//	return ret;
//}
//
//int main() {
//
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	cin >> a >> b >> c;
//	//sum = a;
//	//for (long long i = 0; i < b; i++) { // (a + c) % c == a % c + b % c 
//	//	sum *= a;
//	//}
//
//	cout << go(a, b);
//
//	return 0;
//
//}
#include <bits/stdc++.h>
using namespace std;

long long n;
int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	while (scanf("%d",&n) != EOF) { // true �ؼ� ��� �����ϱ� ��� �ʰ� ����..
		cin >> n;
		long long cnt = 1, ret = 1; // ret : �ڸ��� üũ
		while (true) {
			if (cnt % n == 0) {
				cout << ret << '\n';
				break;
			}
			else {
				cnt = (cnt * 10) + 1;
				//cnt = (cnt % n * 10 % n) + 1; // �� �� ������ �����̴�. => �������� ���ϴ� �����ڶ� n�� �ٲ�� ���� ���� �����ѵ�.
				cnt %= n; // ��� �Ҷ� ���� ��ⷯ ���� ����.
				ret++;
			}
		}
	}

	//while (true) {// �ȵǳ�... ��ⷯ ���� �ʿ�.. 
	//	cin >> n;
	//	if (n == 1) {
	//		cout << 1 << '\n';
	//		continue;
	//	}

	//	long long x = 1, cnt = 0, num = 0, m = n; 
	//	for (int i = 0; i < 100000; i++) {
	//		if (m / 10 < 1) {
	//			num++;
	//			break;
	//		}
	//		m = m / 10;
	//		num++;
	//	}

	//	cout << "�ڸ��� : " << num << '\n';
	//	int a = 1;
	//	for (int i = 1; i < num - 1; i++) {
	//		a = a * 10 + 1;
	//	}
	//	while (true) {
	//		if (x % n == 0) {
	//			cout << cnt << '\n';
	//			break;
	//		}
	//		else {
	//			if (num != 1) {
	//				if (x == 1) {
	//					x = x * pow(10, (num - 1)) + a;
	//					cnt = cnt + num;
	//				}
	//				else {
	//					x = x * pow(10, (num)) + (pow(10, (num-1)) + a);
	//					cnt = cnt + num;
	//				}
	//				
	//			}
	//			else {
	//				x = x * 10 + 1;
	//				cnt = cnt + num;
	//			}
	//			
	//		}
	//	}
	//}

	return 0;
}
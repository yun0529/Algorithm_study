//#include<bits/stdc++.h>
//using namespace std;
//
//double n, temp;
//priority_queue<double> pq;
//vector<double> v;
//// n�� 5õ������ ���� -> �迭�� ���� ���⵵�� �ʹ� Ŀ���� ���� �� ����
//// �켱���� ť ���
//int main() {
//	ios_base::sync_with_stdio(false); 
//	cin.tie(NULL); cout.tie(NULL);
//
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> temp;
//		if (pq.size() >= 7) {
//			pq.push(temp);
//			pq.pop();
//		}
//		else pq.push(temp);
//	}
//	while (pq.size()) {
//		v.push_back(pq.top());
//		pq.pop();
//	}
//	reverse(v.begin(), v.end());
//	for (double d : v) {
//		printf("%.3lf\n", d);
//	}
//	return 0;
//}
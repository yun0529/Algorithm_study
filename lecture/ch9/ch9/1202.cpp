//#include <bits/stdc++.h>
//using namespace std;
//
//long long n, k, ret, e;
//vector<pair<long long, long long>> v;
//vector<long long> bag;
//
//priority_queue<long long> pq;
//
//int main() {
//
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL); cout.tie(NULL);
//
//	cin >> n >> k;
//	for (int i = 0; i < n; i++) {
//		int a, b;
//		cin >> a >> b;
//		v.push_back({ a,b }); // ���Լ�
//	}
//
//	for (int i = 0; i < k; i++) {
//		int a;
//		cin >> a;
//		bag.push_back(a);
//	}
//
//	sort(v.begin(), v.end());
//	sort(bag.begin(), bag.end());
//
//	//int j = 0;
//	for (int i = 0; i < k; i++) {
//		while (j < n && v[j].first <= bag[i]) {
//			pq.push(v[j].second);
//			j++;
//		}
//		//for (int j = 0; j < n; j++) { // �̷��� ������ ó������ �ٽ� ���Ե� -> Ʋ��
//		//	if (v[j].first <= bag[i]) {
//		//		pq.push(v[j].second);
//		//	}
//		//	else {
//		//		break;
//		//	}
//		//}
//		if (pq.size()) {
//			ret += pq.top();
//			pq.pop();
//		}
//	}
//	
//	cout << ret;
//
//	return 0;
//}
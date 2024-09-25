//#include<bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//ll n, k, ret, temp1, temp;
//int main() {
//	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
//
//	cin >> n >> k;
//	vector<pair<ll, ll>> v(n);
//	vector<ll> vv(k);
//	for (int i = 0; i < n; i++) {
//		cin >> v[i].first >> v[i].second;
//	}
//	for (int i = 0; i < k; i++) cin >> vv[i];
//	sort(v.begin(), v.end());
//	sort(vv.begin(), vv.end());
//	priority_queue<ll> pq;
//
//	int j = 0;
//	for (int i = 0; i < k; i++) {
//		while (j < n && v[j].first <= vv[i]) pq.push(v[j++].second);
//		if (pq.size()) { // 어짜피 오름차순으로 무게가 정렬되어 있으니 다음 가방에는 무조건 다 들어갈 수 있음
//			ret += pq.top(); pq.pop(); // 넣을 수 있는 것들중 top을 더함
//		}
//	}
//	cout << ret << "\n";
//	return 0;
//}
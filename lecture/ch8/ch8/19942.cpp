//#include <bits/stdc++.h>
//using namespace std;
//
//int n, arr[16][6], cri[5], sum[6], m = 987654321;
//map<int, vector<vector<int>>> ret;
//bool flag = false;
//
//int main() {
//
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL); cout.tie(NULL);
//
//	cin >> n;
//	for (int j = 0; j < 4; j++) {
//		cin >> cri[j];
//	}
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < 5; j++) {
//			cin >> arr[i][j];
//		}
//	}
//
//	for (int i = 0; i < (1 << n); i++) {
//		vector<int> tmp;
//		fill(&sum[0], &sum[0] + 6, 0);
//		for (int j = 0; j < n; j++) {
//			if (i & (1 << j)) {
//				sum[0] += arr[j][0];
//				sum[1] += arr[j][1];
//				sum[2] += arr[j][2];
//				sum[3] += arr[j][3];
//				sum[4] += arr[j][4];
//				tmp.push_back(j);
//			}
//		}
//		if (sum[0] >= cri[0] && sum[1] >= cri[1]
//			&& sum[2] >= cri[2] && sum[3] >= cri[3]) {
//			if (m >= sum[4]) {
//				m = sum[4];
//				ret[m].push_back(tmp);
//			}
//			flag = true;
//		}
//	}
//	if (flag) {
//		sort(ret[m].begin(), ret[m].end());
//		cout << m << '\n';
//		for (int i : ret[m][0]) {
//			cout << i + 1 << ' ';
//		}
//	}
//	else {
//		cout << -1;
//	}
//	
//	return 0;
//}
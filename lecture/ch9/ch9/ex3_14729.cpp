//#include<bits/stdc++.h>
//using namespace std;
//
//double n, temp;
//priority_queue<double> pq;
//vector<double> v;
//// n이 5천만까지 가능 -> 배열은 공간 복잡도가 너무 커져서 힘들 수 있음
//// 우선순위 큐 사용
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
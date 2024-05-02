//// prefix sum : 누적합
//// 배열이 [], 1, 10, 11, 100 이렇게 있으면
//// 0번째 공간에는 값을 넣지 않는다.
//// psum 이라고 부른다.
//// 
//// [1] -> 1번째까지의 합
//// [2] -> 2번째까지의 합
//// [3] -> 3번째까지의 합...
//
//#include <bits/stdc++.h>
//using namespace std;
//
//int a[100004], b, c, psum[100004], n, m;
//
//int main() { 
//	// 특정 구간의 합 -> psum[4] - psum[1] 이런식으로 할 수 있음
//	// 아래의 코드처럼 하면 100000 * 100000 이기 때문에 안될거임
//	// 정적 배열에서만 사용할 수 있음
//	// 동적 배열에서는 펜익트리 라는 것을 사용
//	
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++) {
//		cin >> a[i];
//	}
//	for (int i = 0; i < m; i++) {
//		cin >> b >> c;
//		int sum = 0;
//		for (int j = b; j <= c; j++) sum += a[j];
//		cout << sum << '\n';
//	}
//	
//	
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++) {
//		cin >> a[i];
//		psum[i] = psum[i - 1] + a[i]; // 이렇게 이전에 썼던 psum을 활용한다. 그렇기 때문이라도 psum은 1부터 시작
//	}
//	for (int i = 0; i < m; i++) {
//		cin >> b >> c;
//		cout << psum[c] - psum[b - 1] << "\n";
//	}
//	return 0;
//}
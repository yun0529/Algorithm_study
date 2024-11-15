//#include<bits/stdc++.h>
//using namespace std;
//
////int n = 5, k = 3;
////int a[5] = { 1,2,3,4,5 };
////
////void combi(int start, vector<int> b) {
////	if (b.size() == k) {
////		for (int i : b) {
////			cout << a[i] << ' ';
////		}
////		cout << '\n';
////		return;
////	}
////	for (int i = start+1; i < n; i++) {
////		b.push_back(i);
////		combi(i, b);
////		b.pop_back();
////	}
////}
//
//int n = 0, k = 0, cnt = 0;
//void combi(int start, vector<int> b) {
//	if (b.size() == k) {
//		cnt++;
//		return;
//	}
//	for (int i = start + 1; i < n; i++) {
//		b.push_back(i);
//		combi(i, b);
//		b.pop_back();
//	}
//}
//
//long long ret;
//long long pec(int n) {
//	long long sum = 1;
//	for (int i = 1; i <= n; i++) {
//		sum *= i;
//	}
//	return sum;
//}
//
//int pascal[1004][1004];
//void go() {
//	pascal[0][0] = 1;
//	for (int i = 1; i <= 1000; i++) {
//		pascal[i][0] = 1;
//		for (int j = 1; j <= i; j++) {
//			pascal[i][j] = (pascal[i - 1][j - 1] + pascal[i - 1][j])%10007;
//		}
//	}
//}
//
//int main() {
//
//	////cin >> n >> k;
//	//vector<int>	b;
//	//combi(-1, b);
//	//cout << "\n====================\n";
//	//do {
//	//	for (int i = 0; i < k; i++) {
//	//		cout << a[i] << ' ';
//	//	}
//	//	cout << '\n';
//	//} while (next_permutation(&a[0], &a[0] + n));
//	// ==========================================================
//	//long long a = 0;
//	//
//	//while (scanf("%d", &a) != EOF) {
//	//	cin >> a;
//	//	long long cnt = 1;
//	//	long long x = 1;
//	//	while (x % a != 0) {
//	//		x = (x * 10) + 1;
//	//		x %= a;
//	//		cnt++;
//	//	}
//	//	cout << cnt<<'\n';
//	//}
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL); cout.tie(NULL);
//	cin >> n >> k;
//	go();
//	//cout << (pec(n) / pec(n - k) / pec(k)) % 10007;
//	cout << pascal[n][k];
//	//vector<int> b;
//	//combi(-1, b);
//
//	//cout << cnt % 10007;
//
//	return 0;
//}
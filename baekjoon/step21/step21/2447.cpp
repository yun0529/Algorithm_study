//#include <bits/stdc++.h>
//using namespace std;
//
//char ch[10000][10000];
//
//void rec_star(int n,int i, int j) {
//
//	if ((j/n)%3 == 1 && (i/n)%3 == 1) {
//		cout << ' ';
//	}
//	else {
//		if (n / 3 == 0) {
//			cout << '*';
//		}
//		else {
//			rec_star(n / 3, i, j);
//		}
//
//	}
//
//}
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			rec_star(n,i,j);
//		}
//		cout << "\n";
//	}
//	
//
//	return 0;
//}
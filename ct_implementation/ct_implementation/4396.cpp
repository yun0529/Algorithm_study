//#include <iostream>
//#include<vector>
//#include<tuple>
//using namespace std;
//
//char arr[11][11], visited[11][11];
//int n;
//vector<pair<int, int>> v;
//int main() {
//
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			visited[i][j] = '0';
//		}
//	}
//	
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			cin >> arr[i][j];
//			if (arr[i][j] == '*') {
//				v.push_back({ i,j });
//				for (int k = i - 1; k <= i + 1; k++) {
//					for (int r = j - 1; r <= j + 1; r++) {
//						if (k == i && r == j)continue;
//						if (k < 0 || r < 0 || k >= n || r >= n)continue;
//						visited[k][r]++;
//					}
//				}
//			}
//		}
//	}
//	//for (int i = 0; i < n; i++) {
//	//	for (int j = 0; j < n; j++) {
//	//		cout << visited[i][j];
//	//	}
//	//	cout << '\n';
//	//}
//	char c;
//	bool flag = false;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			cin >> c;
//			if (c != '.') {
//				if (arr[i][j] == '*') {
//					flag = true;
//				}
//				else arr[i][j] = visited[i][j];
//			}
//		}
//	}
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			if (arr[i][j] == '*' && !flag) {
//				cout << '.';
//			}
//			else cout << arr[i][j];
//		}
//		cout << '\n';
//	}
//	return 0;
//}
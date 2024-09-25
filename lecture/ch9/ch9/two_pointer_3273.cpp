//// 
//// 두개의 포인터를 가지고 탐색하는 알고리즘
//// 정렬된 배열에서 두 수의 합 찾기, 연속된 부분배열의 합 찾기에 사용
//// 
//// left, right pointer
//// 
//
//// 두 수의 조합 찾기
//// n이 10만까지 가면 시간복잡도가 너무 높아짐
//// 무조건 정렬 필요
//#include <bits/stdc++.h>;
//using namespace std;
//int n, x, ret;
//
//int main() {
//	cin >> n;
//	vector<int> a(n);
//
//	for (int i = 0; i < n; i++) {
//		cin >> a[i];
//	}
//	cin >> x;
//	sort(a.begin(), a.end());
//	int l = 0, r = n - 1;
//	while (l < r) {
//		if (a[l] + a[r] == x) {
//			r--; // 오른쪽 포인터 한칸 왼쪽으로 이동
//			// -> 왼쪽꺼를 이동시켜도 상관 x
//			// 숫자를 작은 방향으로 갈지 큰 방향으로 갈지에 따라 결정
//			ret++;
//		}
//		else if (a[l] + a[r] < x) {
//			l++;
//		}
//		else if (a[l] + a[r] > x) {
//			r--;
//		}
//	}
//	cout << ret;
//	return 0;
//}
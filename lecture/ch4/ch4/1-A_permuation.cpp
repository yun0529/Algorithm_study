//// 백준 2309 문제
//#include <bits/stdc++.h>
//using namespace std;
//
//// 9개 중에 순서 상관없이 7개를 뽑는다 9C7 의 합이 100이다.
//// 순서 상관있게 뽑아도 되기 때문에 9P7도 가능함.
//int a[9];
//int sum;
//vector<pair<int,int>> ret;
//void solve(); // 조합 사용해서 뽑는법
//
//int main() {
//
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	for (int i = 0; i < 9; i++) {
//		cin >> a[i];
//	}
//	sort(a, a + 9);
//
//	do { // next_permutation 사용하는 부분 9개 중에 7개만 슬라이스 해서 사용
//
//		for (int i : a)cout << i << " ";
//		cout << "\n";
//		int sum = 0;
//		for (int i = 0; i < 7; i++)sum += a[i];
//
//		if (sum == 100)break;
//
//	} while (next_permutation(a, a + 9));
//
//	for (int i = 0; i < 7; i++)cout<<a[i]<<"\n";
//
//	// 9C7을 뽑는 법 (9C2와 동일) -> 7명의 합이 100이여야함. 이때 나머지 두명 A, B가 있음. 
//	// 따라서 전체합 -A-B를 하거나 7개의 합 = 100 인거나 같음
//
//
//
//	return 0;
//}
//
//void solve() {
//	for (int i = 0; i < 9; i++) {
//		for (int j = 0; j < i; j++) {
//			if (sum - a[i] - a[j] == 100) {
//				ret.push_back(make_pair(i,j));
//				return;
//			}
//		}
//	}
//}
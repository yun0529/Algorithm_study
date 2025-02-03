//// 최대 증가 부분 수열
///*
//6
//10 20 10 30 25 50
//*/
//// -> 증가하는 부분수열 중 최대로 긴 부분 수열 (10 20 30 50)
//// 이전까지는 O(N^2) 이였음. 이제부터는 O(NlogN)
//// but. Trace가 안됨
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int n, lis[1001], len, num;
//
//int main() {
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> num;
//		auto lowerPos = lower_bound(lis, lis + len, num); // 특정 값(num) 이상이 처음 나타나는 위치를 찾음
//
//		if (*lowerPos == 0) len++; // num이 없다면 길이 증가시킴 -> 다음 lower_bound 부터 적용됨
//		// 자동으로 배열의 다음 위치를 가리키게 됨
//		*lowerPos = num; // num을 넣음
//		for (int j = 0; j < n; j++) {
//			cout << lis[j] << ' ';
//		}
//		cout << '\n';
//	}
//	cout << len;
//	return 0;
//}

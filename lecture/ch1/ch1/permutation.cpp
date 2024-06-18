//#include "bits/stdc++.h"
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

/*
- 순서 상관 O -> 순열 / 순서 상관 X -> 조합
- 문제에서 다음과 같이 말하면 순열로 해결
  - 순서를 재배치 하여 ...
  - ~ 한 순서의 경우 max 값을 ...
- next_permutation은 오름차순 배열을 기반으로 순열 생성
- prev_permutation은 내림차순 배열을 기반으로 순열 생성
  - 따라서 sort 먼저 하고 순열 함수 호출해야함
- 공식으로 나타내면 nPr = n!/(n-r)! 임
- next_permutation 함수의 원리는 범위가 첫 번째 순열로 재설정된 경우 false를 반환하는 함수임
- 그냥 오름차순 정렬 후 next_permutation를 사용한다 정도로 외우면 됨
*/
//int main() {
//	//배열을 사용하는 경우
//	int a[3] = { 1,2,3 };
//
//	do {
//		for (int i : a) cout << i << " ";
//		cout << "\n";
//	// 배열의 주소는 다음과 같이도 사용 가능 ex. (a, a + 3) 또는 (&a[0], &a[3])
//	} while (next_permutation(&a[0], &a[0] + 3)); 
//
//	cout << "\n----------\n";
//
//	// vector를 사용하는 경우
//	vector<int> v = { 2,3,1 };
//	sort(v.begin(), v.end());
//	do {
//		for (int i : v) cout << i << " ";
//		cout << "\n";
//	// 배열의 주소는 다음과 같이도 사용 가능 ex. (v.begin(), v.begin() + 2)
//	} while (next_permutation(v.begin(),v.end())); 
//
//	return 0;
//}
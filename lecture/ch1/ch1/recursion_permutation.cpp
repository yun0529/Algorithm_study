//// #include "bits/stdc++.h"
//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
///*
//- 재귀로 구현하는 permutation
//*/
//int a[3] = { 1,2,3 };
//int n = 3, r = 3;
//void print() {
//	for (int i = 0; i < r; i++) {
//		cout << a[i] << " ";
//	}
//	cout << "\n";
//}
//
//void makePermutation(int n, int r, int depth) {
//	if (r == depth) {
//		print();
//		return;
//	}
//	for (int i = depth; i < n; i++) {
//		cout << i << " : " << depth << "를 바꾼다!\n"; // 디버깅용
//		swap(a[i], a[depth]); // depth를 기반으로 swap함
//		makePermutation(n, r, depth + 1);
//		cout << i << " : " << depth << "를 다시 바꾼다!\n";  // 디버깅용
//		swap(a[i], a[depth]); // 끝까지 간 다음에 다시 원래대로 돌림
//	}
//	return;
//}
//
//int main() {
//
//	makePermutation(n, r, 0);
//
//	return 0;
//}
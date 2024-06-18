//#include "bits/stdc++.h"
#include <iostream>
#include <vector>
using namespace std;

/*
* 순서 상관 X
* 몇명을 다양하게 뽑을 때 사용
* nCr = n!/r!(n-r)! 으로 표현 가능
*/
int n = 5, k = 3, a[5] = { 1,2,3,4,5 };

void print(vector<int> b) {
	for (int i : b)cout << i << " ";
	cout << '\n';
}

void combi(int start, vector<int> b) {
	if (b.size() == k) {
		print(b);
		return;
	}
	for (int i = start + 1; i < n; i++) {
		b.push_back(i);
		combi(i, b);
		b.pop_back();
	}
	return;
}

int main() {
	vector<int> b;
	combi(-1, b);

	cout << "----------\n";
	// 중첩 for문으로 combinations 구현 -> r이 커질수록 for문이 증가함 -> 3정도 이상이면 재귀로 작성
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			for (int k = j + 1; k < n; k++) {
				cout << i << " " << j << " " << k << "\n";
			}
		}
	}

	return 0;
}
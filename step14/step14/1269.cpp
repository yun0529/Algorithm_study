//#include <iostream>
//#include <vector>
//#include <set>
//#include <algorithm>
//using namespace std;
//
//void Print_Vec(set<long> vec) {
//	for (long it : vec) {
//		cout << it << " ";
//	}
//	cout << "\n";
//}
//
//void Difference_Func(set<long> vec1, set<long> vec2) {
//
//	set<long> set1, set2;
//	set_difference(vec1.begin(), vec1.end(), vec2.begin(), vec2.end(), inserter(set1, set1.end()));
//	set_difference(vec2.begin(), vec2.end(), vec1.begin(), vec1.end(), inserter(set2, set2.end()));
//	//buff.erase(iter, buff.end());
//	//Print_Vec(set1);
//	//Print_Vec(set2);
//
//	cout << set1.size() + set2.size();
//}
//
//int main(void) {
//
//	cin.tie(NULL);
//	ios_base::sync_with_stdio(false);
//
//	int a, b;
//	cin >> a >> b;
//
//	set<long> A;
//	set<long> B;
//	long n;
//	for (int i = 0; i < a; i++) {
//		cin >> n;
//		A.insert(n);
//	}
//	for (int i = 0; i < b; i++) {
//		cin >> n;
//		B.insert(n);
//	}
//	Difference_Func(A, B);
//
//
//	return 0;
//}
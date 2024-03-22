//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int max_num(int m, int dist) {
//	int i = 1;
//
//	for (i = dist; i >= 1; i--) {
//		cout << "----\n" << m % i << "\n";
//		if (m % i == 0) {
//			cout << "----\ni = " << i << "\n";
//			return i;
//		}
//	}
//	cout <<"\n" << i << "\n";
//	return i;
//}
//
//int main(void) {
//	cin.tie(NULL);
//	ios_base::sync_with_stdio;
//
//	vector<int> arr;
//	vector<int> v;
//	int n, x;
//	cin >> n;
//	int a = 0, b = 0;
//	for (int i = 0; i < n; i++) {
//		cin >> a;
//		v.push_back(a);
//		
//	}
//	for (int i = 0; i < n - 1; i++) {
//		arr.push_back(v[i+1] - v[i]);
//		cout << v[i + 1] - v[i] << "\n";
//	}
//	//sort(arr.begin(), arr.end());
//	x = arr[0];
//	for (int i = 1; i < arr.size(); i++) {
//		x = max_num(x, arr[i]);
//	}
//	int diff = v[n-1] - v[0];
//	
//	cout << (diff / x) - (n - 1);
//
//	return 0;
//}
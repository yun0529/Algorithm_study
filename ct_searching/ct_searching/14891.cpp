//#include <bits/stdc++.h>
//using namespace std;
//
//int n, k, sum;
//int arr[4];
//string str[4];
//vector<pair<int, int>> roll;
//
//
//void left(int idx, int wise) {
//	if (idx <= 0)return;
//	//cout << 'l';
//	if (str[idx][6] != str[idx - 1][2]) {
//		arr[idx - 1] = wise * -1;
//		left(idx - 1, wise * -1);
//	}
//}
//void right(int idx, int wise) {
//	if (idx >= 3)return;
//	//cout << 'r';
//	if (str[idx][2] != str[idx + 1][6]) {
//		arr[idx + 1] = wise * -1;
//		right(idx + 1, wise * -1);
//	}
//}
//
//void check(int idx, int wise) {
//	arr[idx] = wise;
//	left(idx, wise);
//	right(idx, wise);
//	for (int i = 0; i < 4; i++) {
//		if (arr[i] == 1) {
//			str[i] = str[i].substr(7) + str[i].substr(0, 7);
//		}
//		else if(arr[i] == -1){
//			str[i] = str[i].substr(1, 7) + str[i].substr(0, 1);
//		}
//		
//	}
//	//for (int i = 0; i < 4; i++) {// 0 : S , 1 : N
//	//	cout << str[i] << '\n';
//	//}cout << "----\n";
//}
//
//int main() {
//	int a,b;
//	char c;
//	for (int i = 0; i < 4; i++) {// 1 : S , 0 : N
//		cin >> str[i];
//	}
//
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> a >> b;
//		roll.push_back({ a,b });
//	}
//	for (auto r : roll) {
//		
//		fill(arr, arr + 4, 0);
//		check(r.first - 1, r.second);
//	}
//	if (str[0][0] == '1') sum += 1;
//	if (str[1][0] == '1') sum += 2;
//	if (str[2][0] == '1') sum += 4;
//	if (str[3][0] == '1') sum += 8;
//
//	cout << sum;
//	return 0;
//}
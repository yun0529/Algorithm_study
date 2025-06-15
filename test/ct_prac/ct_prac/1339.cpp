#if 0
#include <iostream>
#include <map>
#include <algorithm>
#include <vector>
using namespace std;

int n, mx;
string srr[10];
map<char, int> mp;
vector<int> v;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	cin >> n;
	for (int i = 0;i < n;i++) {
		cin >> srr[i];
	}
	for (int i = 0;i < 10;i++) {
		v.push_back(i);
	}
	string str = "";
	for (int i = 0;i < n;i++) {
		for (int j = 0;j < srr[i].length();j++) {
			if (mp.find(srr[i][j]) == mp.end()) str += srr[i][j];
			mp[srr[i][j]] = 0;
		}
	}

	do {
		for (int i = 0;i < str.length();i++) {
			mp[str[i]] = v[i];
			int sum = 0;
			for (int j = 0;j < n;j++) {
				int tmp = 0;
				int num = 1;
				for (int k = srr[j].length() - 1;k >= 0;k--) {
					tmp += mp[srr[j][k]] * num;
					num *= 10; // ÀÚ¸´¼ö Áõ°¡
				}
				sum += tmp;
			}
			mx = max(mx, sum);
		}
	} while (next_permutation(v.begin(), v.end()));
	cout << mx;
	return 0;
}
#endif // 01

#if 0
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int n, mx;
string srr[10];
int arr[26];
bool cmp(int a, int b) {
	return a > b;
}
int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	cin >> n;
	for (int i = 0;i < n;i++) {
		cin >> srr[i];
	}
	
	for (int i = 0;i < n;i++) {
		int num = 1;
		for (int j = srr[i].length()-1;j >= 0;j--) {
			arr[srr[i][j] - 'A'] += num;
			num *= 10;
		}
	}
	sort(arr, arr + 26, cmp);
	int num = 9;
	for (int i = 0;i <= 9;i++) {
		if (arr[i] == 0) break;
		mx += arr[i] * num--;
	}
	cout << mx;
	return 0;
}
#endif // 01
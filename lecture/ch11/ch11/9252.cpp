#if 01
#include <iostream>
#include <string>
#include <vector>
using namespace std;

string str1, str2;
int dp[1004][1004];
vector<char> v;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> str1 >> str2;
	int len1 = str1.length();
	int len2 = str2.length();
	for (int i = 1;i <= len2;++i) {
		for (int j = 1;j <= len1;++j) {
			if (str2[i - 1] == str1[j - 1]) {
				dp[i][j] = dp[i - 1][j - 1] + 1;
			}
			else {
				dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
			}
		}
	}
	int ret = dp[len2][len1];
	for (int i = len2;i >= 1;--i) {
		for (int j = len1;j >= 1;--j) {
			if (str2[i - 1] == str1[j - 1]) {
				if (dp[i][j] == ret) {
					//cout << ret << ", " << str1[j-1] << '\n';
					v.push_back(str1[j-1]);
					ret -= 1;
				}
			}
		}
	}
	//for (int i = 0;i <= len2;++i) {
	//	for (int j = 0;j <= len1;++j) {
	//		cout << dp[i][j] << ' ';
	//	}
	//	cout << '\n';
	//}
	cout << dp[len2][len1] << '\n';
	for (int i = v.size() - 1;i >= 0;--i) {
		cout << v[i];
	}
	return 0;
}

#endif // 0

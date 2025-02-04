#if 0
#include <iostream>
#include <string>
using namespace std;

int ret;
int dp[1004][1004];
string str1, str2;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> str1 >> str2;
	int len1 = str1.length();
	int len2 = str2.length();
	for (int i = 1; i <= len1; i++) {
		for (int j = 1; j <= len2; j++) {
			if (str1[i - 1] == str2[j - 1]) {
				dp[i][j] = dp[i - 1][j - 1] + 1;
				
			}
			else {
				dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
			}
		}
	}
	//for (int i = 0; i <= str1.length(); i++)
	//{
	//	for (int j = 0; j <= str2.length(); j++)
	//		cout << dp[i][j] << " ";
	//	cout << endl;
	//}
	cout << dp[len1][len2];
	return 0;
}
#endif // 01

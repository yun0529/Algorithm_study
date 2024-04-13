//#include <iostream>
//#include <string>
//#include <cstring>
//using namespace std;
//
//int cnt;
//
//int recursion(const char* s, int l, int r) {
//	cnt++;
//	if (l >= r) return 1;
//	else if (s[l] != s[r]) return 0;
//	else return recursion(s, l + 1, r - 1);
//}
//
//int isPalindrome(const char* s) {
//	return recursion(s, 0, strlen(s) - 1);
//}
//
//int main(void) {
//
//	cin.tie(NULL);
//	ios_base::sync_with_stdio(false);
//
//	int n;
//	cin >> n;
//	char* str = (char*)malloc(sizeof(char)*1001);
//	for (int i = 0; i < n; i++) {
//		cnt = 0;
//		cin >> str;
//		cout << isPalindrome(str) << " " << cnt << "\n";
//	}
//	
//	return 0;
//}
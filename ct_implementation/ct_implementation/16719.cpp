//#include <iostream>
//using namespace std;
//
//char c[104];
//string str, ret = "";
//int arr[27];
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL); cout.tie(NULL);
//
//	cin >> str;
//	for (int i = 0; i < str.length(); i++) {
//		arr[str[i] - 'A']++;
//	}
//	for (int i = 0; i < str.length(); i++) {
//		int flag = true;
//		for (int j = 0; j < 26; j++) {
//			if (arr[j] >= 1) {
//				if (ret.length() >= 1) {
//					int idx = str.find(j + 'A'); // 원래 문자에서 넣을 문자 위치 찾기
//					int cur = str.find(ret[0]); // 만드는 문자열의 가장 앞 문자 위치 찾기
//					// 넣을 문자가 첫 문자보다 앞에 들어가야 하지만 사전상 뒤인 경우
//					if (idx < cur && j > ret[0] - 'A') continue;
//					// idx로 잘라서 문자 넣기
//					if (idx >= ret.length()) {
//						ret += j + 'A';
//					}
//					else {
//						string pre = ret.substr(0, idx);
//						string nex = ret.substr(idx, ret.length());
//						pre += j + 'A';
//						ret = pre + nex;
//					}
//					arr[j]--;
//					flag = false;
//					break;
//				}
//				else { // 처음은 빠른거 바로 입력
//					ret += j + 'A';
//					arr[j]--;
//					flag = false;
//					break;
//				}
//			}
//		}
//		if (flag) {
//			for (int j = 0; j < 26; j++) {
//				if (arr[j] >= 1) {
//					ret = (char)(j + 'A') + ret;
//					arr[j]--;
//					break;
//				}
//			}
//			
//		}
//		cout << ret << '\n';
//	}
//	return 0;
//}
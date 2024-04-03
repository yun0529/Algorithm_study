//#include <iostream>
//#include <map>
//using namespace std;
//
//int main(void) {
//
//	int n, count = 0;
//	string str1, str2;
//	map<string, bool> mp;
//	mp.insert({ "ChongChong" ,true });
//
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> str1 >> str2;
//
//		//if (str1 == "ChongChong") {
//		//	mp.insert({str1, true});
//		//}
//		//else if (str2 == "ChongChong") {
//		//	mp.insert({ str2, true });
//		//}
//
//		if (mp[str1]) {
//			mp[str2] = true;
//		}
//		else if (mp[str2]) {
//			mp[str1] = true;
//		}
//
//		//if (mp.find(str1) == mp.end() && mp.find(str2) == mp.end()) {
//		//	mp.insert({ str1, 0 });
//		//	mp.insert({ str2, 0 });
//		//}
//		//else if (mp.find(str1) == mp.end() && mp.find(str2)->second == 0) {
//		//	mp.insert({ str1, 0 });
//		//}
//		//else if (mp.find(str2) == mp.end() && mp.find(str1)->second == 0) {
//		//	mp.insert({ str2, 0 });
//		//}
//		//else if (mp.find(str1) == mp.end() &&  mp.find(str2)->second == 1) {
//		//	mp.insert({ str1, 1 });
//		//	count++;
//		//}
//		//else if (mp.find(str2) == mp.end() && mp.find(str1)->second == 1) {
//		//	mp.insert({ str2, 1 });
//		//	count++;
//		//}
//		//else if (mp.find(str1) != mp.end() && mp.find(str2)->second == 1) {
//		//	mp.find(str1)->second = 1;
//		//	count++;
//		//}
//		//else if (mp.find(str2) != mp.end() && mp.find(str1)->second == 1) {
//		//	mp.find(str2)->second = 1;
//		//	count++;
//		//}
//
//	}
//	for (auto &m : mp) {
//		if (m.second) count++;
//	}
//	cout << count;
//	return 0;
//}
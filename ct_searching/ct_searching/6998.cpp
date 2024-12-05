//#include<bits/stdc++.h>	
//using namespace std;
//
//int n;
//string t1, t2;
//stack<char> s;
//
//vector<string> go(string str) {
//	int cntsh = 0, cnta = 0, cur = 1;
//	vector<string> vs;
//	for (int i = 1; i < str.length() - 2; i++) { // Á©¾Õ, Á©µÚ »©¾ßÇÔ
//		if (str[i] == '#') cntsh++;
//		else if(str[i] != ' ') cnta++;
//		//cout<<str[i];
//		if (cntsh == cnta && cntsh != 0) {
//			string node = "";
//			for (int j = cur; j <= i; j++) {
//				if (str[j] == '#') node += '0';
//				else if (str[j] != ' ') node += '1';
//			}
//			vs.push_back(node);
//			cur = i+1;
//			cntsh = 0;
//			cnta = 0;
//		}
//	}
//	return vs;
//}
//
//int main() {
//
//	cin >> n; cin.ignore();
//	for (int i = 0; i < n; i++) {
//		getline(cin, t1);
//		//cin.ignore();
//		getline(cin, t2);
//		//cout << t1 << '\n' << t2<<'\n';
//		//t1.erase(find(t1.begin(), t1.end(), ' '));
//		//t2.erase(find(t2.begin(), t2.end(), ' '));
//		vector<string> vs1 = go(t1);
//		vector<string> vs2 = go(t2);
//		//for (string j1 : vs1) {
//		//	cout << j1 << '\n';
//		//}cout << "\n-------\n";
//		//for (string j2 : vs2) {
//		//	cout << j2 << '\n';
//		//}
//		bool flag = true;
//		for (string j1 : vs1) {
//			bool flag_s = false;
//			for (string j2 : vs2) {
//				if (j1 == j2) {
//					flag_s = true;
//					break;
//				}
//			}
//			if (!flag_s) flag = false;
//		}
//		if (flag && vs2.size() == vs1.size()) cout << "The two trees are isomorphic." << '\n';
//		else cout << "The two trees are not isomorphic." << '\n';
//	}
//
//	return 0;
//}
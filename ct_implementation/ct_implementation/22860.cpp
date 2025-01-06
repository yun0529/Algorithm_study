//#include <iostream>
//#include <bits/stdc++.h>
//#include <unordered_map>
//using namespace std;
//
//int n, m;
//// ���� ������ key, ���� ���� �Ǵ� ���� ����
//unordered_map<string, vector<pair<string, int>>> mp;
//unordered_map<string, int> visited;
//int type_cnt, total_cnt;
//
//void go(string str) {
//    for (auto i : mp[str]) {
//        if (i.second == 0) {
//            if (!visited[i.first]) { // �湮 X
//                visited[i.first] = 1;
//                type_cnt++;
//            }
//            total_cnt++;
//        }
//        else {
//            go(i.first);
//        }
//    }
//}
//
//vector<string> par(string str) {
//    vector<string> v;
//    while (str.find("/") != string::npos) {
//        int idx = str.find("/");
//        v.push_back(str.substr(0, idx));
//        str = str.substr(idx + 1, str.length());
//    }
//    v.push_back(str);
//    return v;
//}
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL); cout.tie(NULL);
//	// ������ ���� n, ������ ���� m
//	// main �Է�
//	// c : ������ 1, �����̸� 0
//	// q ���� �������� ���� ������ ���� ����, �� ���� ���
//
//	cin >> n >> m;
//	string p, f;
//	int c;
//	for (int i = 0; i < n + m; i++) {
//		cin >> p >> f >> c;
//        vector<pair<string, int>> v = mp[p]; // ���� ���� ���ο� ���� �Ǵ� ������ �ֱ� ����
//        v.push_back({ f,c });
//        mp[p] = v;
//		
//	}
//	int q;
//	string qur;
//
//	cin >> q;
//	for (int i = 0; i < q; i++) {
//		cin >> qur;
//        vector<string> v = par(qur);
//        go(v.back());
//        cout << type_cnt << ' ' << total_cnt << '\n';
//        type_cnt = 0; total_cnt = 0;
//        visited.clear();
//	}
//	
//	return 0;
//}
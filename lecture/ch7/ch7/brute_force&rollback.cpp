//// ����Ž���� ���󺹱�
//// ���°��� �� ���� ����Ǽ��� �ݿ����� �ʵ��� �Ѵ�.
//
//// �⺻ ������
////go(int here) {
////	visited[there] = 1;
////	go(there);
////	visited[there] = 0
////}
//
//#include <bits/stdc++.h>
//using namespace std;
//
//int visited[4];
//vector<int> adj[4];
//vector<int> v;
//
//void print() {
//	for (int i : v) cout << char(i + 'A') << " "; // 0,1 ,2 �� A, B, C�� ���
//	cout << '\n';
//}
//
//void go(int idx) {
//	if (v.size() == 3) { // 3���� ������ Ž���ϸ� print
//		print(); return; // �ٷ� return
//	}
//	for (int there : adj[idx]) {
//		if (visited[there]) continue;
//		visited[there] = 1;
//		v.push_back(there); // ���� ��� �Է�
//		cout << "push_back :: threr : " << there << '\n';
//		for (int i : v) cout << i << " ";
//		cout << '\n';
//		go(there);
//		visited[there] = 0; // �湮ó�� ���� ����
//		v.pop_back(); // ���󺹱� (������ ��� ����)
//		cout << "pop_back :: threr : " << there << '\n';
//		for (int i : v) cout << i << " ";
//		cout << '\n';
//	}
//}
//
//// ��湮 X
//// Ž���� ������ 3����� ���
//int main() {
//	adj[0].push_back(1);
//	adj[1].push_back(2);
//
//	adj[1].push_back(3);
//	adj[1].push_back(0);
//	
//	adj[2].push_back(1);
//	adj[3].push_back(1);
//
//	visited[0] = 1; // 0���� ����
//	v.push_back(0);
//	go(0);
//	return 0;
//}
//// 완전탐색과 원상복구
//// 상태값이 그 다음 경우의수에 반영되지 않도록 한다.
//
//// 기본 프레임
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
//	for (int i : v) cout << char(i + 'A') << " "; // 0,1 ,2 를 A, B, C로 출력
//	cout << '\n';
//}
//
//void go(int idx) {
//	if (v.size() == 3) { // 3개의 정점을 탐색하면 print
//		print(); return; // 바로 return
//	}
//	for (int there : adj[idx]) {
//		if (visited[there]) continue;
//		visited[there] = 1;
//		v.push_back(there); // 다음 노드 입력
//		cout << "push_back :: threr : " << there << '\n';
//		for (int i : v) cout << i << " ";
//		cout << '\n';
//		go(there);
//		visited[there] = 0; // 방문처리 하지 않음
//		v.pop_back(); // 원상복구 (마지막 요소 삭제)
//		cout << "pop_back :: threr : " << there << '\n';
//		for (int i : v) cout << i << " ";
//		cout << '\n';
//	}
//}
//
//// 재방문 X
//// 탐색한 정점이 3개라면 출력
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
//	visited[0] = 1; // 0부터 시작
//	v.push_back(0);
//	go(0);
//	return 0;
//}
//// 트리 순회
//// 
//// 후위순회 (postorder) 는 자식들 노드를 방문하고 자신을 방문
//// 재귀적으로 처리
//// 
//// 전위순회 (preorder)
//// 먼저 자신의 노드를 방문하고 그 다음 노드들을 방문하는 것 (DFS)
//// 
//// 중위순회 (inorder)
//// 왼쪽 노드를 먼저 방문, 그 다음 자신의 노드를 방문하고 오른쪽 노드를 방문 
//// 
//#include <bits/stdc++.h>
//using namespace std;
//
//vector<int> adj[1004];
//int visited[1004];
//
//void postOrder(int here) {
//	if (visited[here] == 0) {
//		if (adj[here].size() == 1)postOrder(adj[here][0]);
//		if (adj[here].size() == 2) { // 자식 노드가 2개일 경우
//			postOrder(adj[here][0]);
//			postOrder(adj[here][1]);
//		}
//		visited[here] = 1;
//		cout << here << ' ';
//	}
//}
//
//void preOrder(int here) {
//	if (visited[here] == 0) {
//		visited[here] = 1; // 내 방문 처리를 먼저
//		cout << here << ' ';
//		if (adj[here].size() == 1)preOrder(adj[here][0]);
//		if (adj[here].size() == 2) { // 자식 노드가 2개일 경우
//			preOrder(adj[here][0]);
//			preOrder(adj[here][1]);
//		}
//	}
//}
//
//void inOrder(int here) {
//	if (visited[here] == 0) {
//		if (adj[here].size() == 1) {
//			preOrder(adj[here][0]);
//			visited[here] = 1; // 내 방문 처리
//			cout << here << ' ';
//		}
//		else if (adj[here].size() == 2) { // 자식 노드가 2개일 경우
//			preOrder(adj[here][0]);
//
//			visited[here] = 1; // 내 방문 처리
//			cout << here << ' ';
//
//			preOrder(adj[here][1]);
//		}
//		else {
//			visited[here] = 1; // 내 방문 처리
//			cout << here << ' ';
//		}
//	}
//}
//
//int main() {
//	adj[1].push_back(2); // 인접리스트로 생성
//	adj[1].push_back(3);
//	adj[2].push_back(4);
//	adj[2].push_back(5);
//
//	int root = 1;
//	cout << "트리순회 : postOrder \n";
//	postOrder(root); memset(visited, 0, sizeof(visited));
//	cout << '\n';
//	cout << "트리순회 : preOrder \n";
//	preOrder(root); memset(visited, 0, sizeof(visited));
//	cout << '\n';
//	cout << "트리순회 : inOrder \n";
//	inOrder(root); memset(visited, 0, sizeof(visited));
//	return 0;
//}
//#include <bits/stdc++.h>
//using namespace std;
//vector<int> adj[1004];
//int visited[1004];
//
//void postOrder(int here) {
//	if (visited[here] == 0) {
//		/*if (adj[here].size() == 1)postOrder(adj[here][0]);
//		if (adj[here].size() == 2) {
//			postOrder(adj[here][0]);
//			postOrder(adj[here][1]);
//		}*/
//		for (auto there : adj[here]) {
//			postOrder(there);
//		}
//		visited[here] = 1;
//		cout << here << ' ';
//	}
//}
//void preOrder(int here) {
//	if (visited[here] == 0) {
//		visited[here] = 1;
//		cout << here << ' ';
//		for (auto there : adj[here]) {
//			preOrder(there);
//		}
//	}
//}
//void inOrder(int here) {
//	if (visited[here] == 0) {
//		for (int i = 0; i < adj[here].size() / 2; ++i) {
//			inOrder(adj[here][i]);
//		}
//		visited[here] = 1;
//		cout << here << ' ';
//		for (int i = adj[here].size() / 2; i < adj[here].size(); ++i) {
//			inOrder(adj[here][i]);
//		}
//	}
//}
//
//int main() {
//
//	adj[1].push_back(2);
//	adj[1].push_back(3);
//	adj[2].push_back(4);
//	adj[2].push_back(5);
//	int root = 1;
//	cout << "\n 트리순회 : postOrder \n";
//	postOrder(root); memset(visited, 0, sizeof(visited));
//	cout << "\n 트리순회 : preOrder \n";
//	preOrder(root); memset(visited, 0, sizeof(visited));
//	cout << "\n 트리순회 : inOrder \n";
//	inOrder(root);
//
//	return 0;
//}
#include <bits/stdc++.h>
using namespace std;

int n, a[1000004], ret[1000004];
stack<int> s;
int main() {
	cin >> n;
	memset(ret, -1, sizeof(ret));
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		while (s.size() && a[s.top()] < a[i]) {
			ret[s.top()] = a[i]; s.pop();
		}
		s.push(i);
	}
	for (int i = 0; i < n; i++) cout << ret[i] << " ";
}

//int arr[1000004], n;
//int okensu[1000004];
////int visited[1000004];
//
//vector<pair<int,int>> q;
//vector<pair<int, int>>::iterator iter;

//void dfs(int here) {
//	visited[here] = 1;
//	for (int there : okensu) {
//		if (visited[there] == 0) {
//			dfs(there);
//		}
//	}
//}

//int main() { // ��ū���� �������� ���簡 i�� ��� i + 1 ��° ��, ������ -1
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL); cout.tie(NULL);
//
//	// �����ʿ� ���� �� �ִ��� �˼�
//	// �����ʿ� ������ ū ���� �ִ��� �˻�
//	// ������ ū ���� �ִٸ� �ٷ� ���
//	cin >> n;
//	int m = 1000004;
//	for (int i = 1; i <= n; i++) {
//		cin >> arr[i - 1];
//		okensu[i] = arr[i - 1]; // arr�� 0���� ����, okensu�� 1���� arr�� ���� ����
//
//		if (arr[i - 1] > okensu[i - 1]) { // �ٷ� ���� ���� ��ū���� ���
//			okensu[i - 1] = arr[i - 1];
//		}
//		else if (i > 1 && okensu[i - 1] >= arr[i - 1]){
//			q.push_back({ i - 1, okensu[i - 1] }); // �ٷ� ���� ���� ��ū���� �ƴϸ� q�� ���� {idx, okensu[idx]}
//			if (m > okensu[i - 1]) m = okensu[i - 1];
//		}
//
//		if(!q.empty() && m < arr[i - 1]) { // q�� ������� ���� ���, min ���� ū ���� ���� ���
//			int cnt = q.size();
//			iter = q.begin();
//			for (int j = 0; j < cnt; j++) {
//				if (arr[i - 1] > iter[j].second) { // q���� arr�� ū ���
//					okensu[iter[j].first] = arr[i - 1];
//					q.erase(remove(q.begin(), q.end(), iter[j]), q.end());
//					cnt--;
//					j--;
//				}
//			}
//			m = arr[i - 1];
//			//for (auto j : q) {
//			//	if (arr[i-1] > j.second && j.first != 0) { // q���� arr�� ū ���
//			//		okensu[j.first] = arr[i - 1];
//			//		//j.first. = 0;
//			//		q.erase(remove(q.begin(), q.end(), j), q.end());
//			//	}
//			//}
//			//for (auto j : q) {
//			//	if(j.first == 0) q.erase(remove(q.begin(), q.end(), j), q.end());
//			//}
//		}
//	}
//
//	for (int i = 1; i <= n; i++) {
//		if (okensu[i] == arr[i-1]) cout << -1 << ' ';
//		else cout << okensu[i] << ' ';
//	}
//
//	return 0;
//}

//int arr[1000004], n;
//int okensu[1000004];
//int flag[1000004];
//int m = 1000004;
//
//int cur = 0; // ��ū�� �����ϴ� ��ġ
//int cnt = 0; // ��ū���� ����� �� ����ϴ� ī��Ʈ
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL); cout.tie(NULL);
//
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> arr[i];
//		//if (i == 0) continue;
//
//		m = min(m, arr[i]);
//		if (arr[i] > m) { // �ּҰ� ���� ũ�� ���� ���� �� okensu�� ����
//			okensu[cur] = arr[i];
//			flag[i-1] = arr[i]; // okensu�� ����Ǿ�� �ϴ� �κ� ���簪���� �����Ͽ� �ش� ������ ���� �͵��� ����� �� �̰ɷ� ���
//			cur++; // okensu++
//			m = arr[i];
//		}
//
//	}
//	
//	for (int i = 0; i < n; i++) {
//
//		if (okensu[cnt] == 0) {
//			cout << -1 << ' ';
//			continue;
//		}
//
//		if (arr[i] >= okensu[cnt]) {
//			for (int j = cnt; j < cur; j++) {
//				if (arr[i] < okensu[j]) {
//					cout << okensu[j] << ' '; // �ٸ� ��ū�� �߿��� ���� ���ʿ� �ִ°� ���
//					break;
//				}
//				if(j == cur - 1) cout << -1 << ' ';
//			}
//		}
//		else if (arr[i] < okensu[cnt] && flag[i] != 0) {
//			cout << okensu[cnt] << ' ';
//			if (okensu[cnt] == flag[i]) cnt++; // ���� ��ū�� ��� ����
//		}
//		else if (arr[i] < okensu[cnt] && flag[i] == 0) {
//			cout << okensu[cnt] << ' ';
//		}
//	}
//	//cout << -1 << ' ';
//}
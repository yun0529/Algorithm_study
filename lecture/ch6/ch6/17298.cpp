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

//int main() { // 오큰수는 수열에서 현재가 i인 경우 i + 1 번째 수, 없으면 -1
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL); cout.tie(NULL);
//
//	// 오른쪽에 수가 더 있는지 검서
//	// 오른쪽에 나보다 큰 수가 있는지 검사
//	// 나보다 큰 수가 있다면 바로 출력
//	cin >> n;
//	int m = 1000004;
//	for (int i = 1; i <= n; i++) {
//		cin >> arr[i - 1];
//		okensu[i] = arr[i - 1]; // arr는 0부터 시작, okensu은 1부터 arr의 값을 넣음
//
//		if (arr[i - 1] > okensu[i - 1]) { // 바로 다음 수가 오큰수인 경우
//			okensu[i - 1] = arr[i - 1];
//		}
//		else if (i > 1 && okensu[i - 1] >= arr[i - 1]){
//			q.push_back({ i - 1, okensu[i - 1] }); // 바로 다음 수가 오큰수가 아니면 q에 넣음 {idx, okensu[idx]}
//			if (m > okensu[i - 1]) m = okensu[i - 1];
//		}
//
//		if(!q.empty() && m < arr[i - 1]) { // q가 비어있지 않은 경우, min 보다 큰 수가 들어온 경우
//			int cnt = q.size();
//			iter = q.begin();
//			for (int j = 0; j < cnt; j++) {
//				if (arr[i - 1] > iter[j].second) { // q보다 arr이 큰 경우
//					okensu[iter[j].first] = arr[i - 1];
//					q.erase(remove(q.begin(), q.end(), iter[j]), q.end());
//					cnt--;
//					j--;
//				}
//			}
//			m = arr[i - 1];
//			//for (auto j : q) {
//			//	if (arr[i-1] > j.second && j.first != 0) { // q보다 arr이 큰 경우
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
//int cur = 0; // 오큰수 저장하는 위치
//int cnt = 0; // 오큰수를 출력할 때 사용하는 카운트
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
//		if (arr[i] > m) { // 최소값 보다 크면 현재 들어온 값 okensu에 저장
//			okensu[cur] = arr[i];
//			flag[i-1] = arr[i]; // okensu로 변경되어야 하는 부분 현재값으로 지정하여 해당 값보다 작은 것들은 출력할 때 이걸로 출력
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
//					cout << okensu[j] << ' '; // 다른 오큰수 중에서 가장 왼쪽에 있는거 출력
//					break;
//				}
//				if(j == cur - 1) cout << -1 << ' ';
//			}
//		}
//		else if (arr[i] < okensu[cnt] && flag[i] != 0) {
//			cout << okensu[cnt] << ' ';
//			if (okensu[cnt] == flag[i]) cnt++; // 다음 오큰수 출력 설정
//		}
//		else if (arr[i] < okensu[cnt] && flag[i] == 0) {
//			cout << okensu[cnt] << ' ';
//		}
//	}
//	//cout << -1 << ' ';
//}
//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
////int cnt[104]
//int n, k, arr[104], x, lp, rp, ret;
//int a[104], visited[104], cnt;
//const int INF = 987654321;
//vector<int> v;
//
//int main() { // Optimal Page Replacement
//
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL); cout.tie(NULL);
//	cin >> k >> n;
//	for (int i = 0; i < n; i++) cin >> a[i];
//	for (int i = 0; i < n; i++) {
//		if (!visited[a[i]]) { // ���°� ���� ���
//			if (v.size() == k) { // �迭�� ��� �� ���
//				int last_idx = 0, pos;
//				for (int _a : v) {
//					int here_pick = INF;
//					for (int j = i + 1; j < n; j++) { // i (����) ������ �����Ǵ� �� ���� Ȯ��  
//						if (_a == a[j]) { // �迭�� ���� �ִ°Ͱ� ��
//							here_pick = j;
//							break;
//						}
//					}
//					if (last_idx < here_pick) { // last���� ���� �������� �����Ǵ� ���ڰ� ����. (�װź��� ����)
//						last_idx = here_pick;
//						pos = _a; // pos�� ������ ���� ����
//					}
//				}
//				visited[pos] = 0; // �迭���� ����
//				cnt++;
//				v.erase(find(v.begin(), v.end(), pos));
//			}
//			v.push_back(a[i]);
//			visited[a[i]] = 1;
//		}
//	}
//	cout << cnt;
//	//cin >> n >> k;
//	//for (int i = 0; i < k; i++) {
//	//	cin >> arr[i];
//	//	cnt[arr[i]]++;
//	//}
//
//	//for (int i = 0; i < k; i++) {
//	//	// �÷��� ���� �� ����ִٸ� �׳� ����
//	//	// ���� ������ cnt �迭 Ȯ���ϰ� ���� ���� �� ���� ���� ������ ��
//	//	int min_cnt = 987654321;
//	//	int check = 0;
//	//	//int j = 0;
//	//	if (v.size() >= n) {
//	//		if (find(v.begin(), v.end(), arr[i]) != v.end()) {
//	//			cnt[arr[i]]--;
//	//			continue;
//	//		}
//	//		else {
//	//			for (int j : v) {
//	//				if (min_cnt > cnt[j]) {
//	//					min_cnt = cnt[j];
//	//					check = find(v.begin(), v.end(), j) - v.begin(); // Ƚ���� ���� ���� ���� ����
//	//				}
//	//			}
//	//			v.erase(v.begin() + check); // �ش� ���� ����
//	//			v.push_back(arr[i]); // ���� ����� ��� �߰�
//	//			ret++;
//	//			cnt[arr[i]]--;
//	//		}
//	//	}
//	//	else {
//	//		if (find(v.begin(), v.end(), arr[i]) != v.end()) {
//	//			continue;
//	//		}
//	//		v.push_back(arr[i]);
//	//		cnt[arr[i]]--;
//	//	}
//	//	
//	//}
//	//cout << ret;
//	return 0;
//}
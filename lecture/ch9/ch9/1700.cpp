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
//		if (!visited[a[i]]) { // 들어온게 없는 경우
//			if (v.size() == k) { // 배열이 모두 찬 경우
//				int last_idx = 0, pos;
//				for (int _a : v) {
//					int here_pick = INF;
//					for (int j = i + 1; j < n; j++) { // i (현재) 다음에 참조되는 것 부터 확인  
//						if (_a == a[j]) { // 배열에 들어와 있는것과 비교
//							here_pick = j;
//							break;
//						}
//					}
//					if (last_idx < here_pick) { // last에는 가장 마지막에 참조되는 숫자가 담긴다. (그거부터 변경)
//						last_idx = here_pick;
//						pos = _a; // pos에 제거할 숫자 저장
//					}
//				}
//				visited[pos] = 0; // 배열에서 빼냄
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
//	//	// 플러그 꽂을 때 비어있다면 그냥 꽂음
//	//	// 공간 없으면 cnt 배열 확인하고 여러 가지 중 남은 개수 적은걸 뺌
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
//	//					check = find(v.begin(), v.end(), j) - v.begin(); // 횟수가 가장 많이 남은 순서
//	//				}
//	//			}
//	//			v.erase(v.begin() + check); // 해당 순서 삭제
//	//			v.push_back(arr[i]); // 지금 사용할 기기 추가
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
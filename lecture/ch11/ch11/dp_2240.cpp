/*
* Dinamic Programming
* 완탐을 진행할 때 하위 문제에 대한 내용을 저장하여
* 중복되는 부분을 반복해서 풀지 않도록 하는 방법
* 
* 1. 참조투명성을 가져야 함. -> 입력을 제외한 외적요소에 결과값이 영향을 미치지 않아야 함.
* 2. Overlapping Subproblem -> 겹치는 부분 문제가 존재하여야 함. (피보나치 수열)
* 3. Optimal Substructure -> 최적 부분구조 를 가지고 있어야 DP가 가능. (피보나치 수열)
* 4. DAG(Directed Acyclic Graph) -> 방향성이 있고 사이클이 없는 구조여야 함.
* 
* 일단 완탐으로 먼저 문제가 풀리는지 확인
* 경우의 수가 너무 많다면 메모이제이션을 생각해야 함. -> 결과값을 배열, set 등의 자료구조에 저장하는 것.
* 메모리제이션에서 배열의 크기가 너무 크다면 dp가 아니라 그리디 or 다른 알고리즘 고려.
* 
* => 모든 경우의 수를 생각하고, 완탐 하듯이 하고, 메모이제이션 함.
* => idx에서 필요한 값에 따라 2차원, 3차원 늘려나감.
* 
* 맵, 셋, 배열 등에 상태값을 저장함
* 
* xor 으로 상태값 변경하면 쉽게 바꿔서 재귀에 전달할 수 있음.
* dp는 반환값이 무조건 있음.
* DP = 초기화, 기저사례, 메모이제이션, 로직
* 
* Top Down : 재귀 함수이기에 직관적이지만 오버헤드가 큼. 하지만 꼭 필요한 dp만을 만들 수 있음
* Bottom Up : 반복문이기에 재귀가 아님. 하지만 모든 dp를 만들어버림.
* 속도는 보통 Bottom Up이 빠름. 
*/

//#include <bits/stdc++.h>
//using namespace std;
//int dp[1004][2][34], n, m, b[1004];
//
//int go(int idx, int tree, int cnt) {
//	if (cnt < 0)return -1e9; // 음수인 경우 매우 낮은 값을 반환해서 더 못감을 알림
//	if (idx == n)return cnt == 0 ? 0 : -1e9; // 기저사례 : n번 했다면 리턴
//	int& ret = dp[idx][tree][cnt]; // 참조로 받아서 수정해서 dp에도 반영
//	if (~ret) return ret; // -가 아니라면 값이 들어가 있다면 이전에 했던것이기 때문에 그냥 반환하면 됨.
//	return ret = max(go(idx + 1, tree ^ 1, cnt - 1), go(idx + 1, tree, cnt)) + (tree == b[idx] - 1);
//	// 현재 나무에 머무르거나 다른 나무로 이동하는 경우 중 최대 값 선택
//	// 경우의 수 중 max값 + 지금의 idx가 tree와 같은지
//}
//
//int main() {
//	memset(dp, -1, sizeof(dp));
//	cin >> n >> m;
//	for (int i = 0; i < n; i++)cin >> b[i];
//	cout << max(go(0, 1, m - 1), go(0, 0, m)) << '\n';
//
//	return 0;
//}
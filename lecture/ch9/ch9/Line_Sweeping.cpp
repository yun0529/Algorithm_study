//// 빗자루 쓸듯이 탐색한다.
//// 한쪽으로 탐색하면서 무언가를 하는 것.
//// 교차점, 점과 점의 집합 등을 풀 때 사용
//// but, 코테에서는 별로 안어려줌
//// 정렬 시켜놓고 한쪽 방향으로 탐색한다.
//// 최대 구간, 최대 횟수 등을 찾는데 많이 사용한다.
//// 
//// 범위가 있으면 그걸 하나의 배열로 만든다.
//// 0 ~ 10중 0 ~ 4라면 그 구간을 visitied 배열로 방문처리 후 마지막에 처리된 애들만 카운트
//// but. 범위가 너무 크다면..?
//// 
//#include <cstdio>
//#include <cstring>
//#include <algorithm>
//#include <iostream>
//#include <unordered_map>
//using namespace std;
//typedef pair<int, int> P;
//P L[1000004];
//int n, from, to, l, r, ret;
//int main() {
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//    cin >> n;
//    for (int i = 0; i < n; i++) {
//        cin >> from >> to;
//        L[i] = P(from, to);
//    }
//    sort(L, L + n); // 시작시간 기준 정렬
//    l = L[0].first; r = L[0].second;
//    for (int i = 1; i < n; i++) {
//        if (r < L[i].first) { // 이전꺼의 끝 시간이 다음꺼보다 빨리 끝나면
//            ret += (r - l); // 다음꺼 시간 더함
//            l = L[i].first; 
//            r = L[i].second;
//        }
//        else if (L[i].first <= r && L[i].second >= r) {
//            r = L[i].second; // 이번꺼 오른쪽을 다음꺼의 끝으로 변경
//        }
//    }
//    ret += r - l;
//    cout << ret << '\n';
//}
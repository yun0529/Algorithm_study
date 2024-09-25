// 그리디 알고리즘
// 지역 최적해를 찾는 과정에서 이를 모아 전역 최적해를 구하는 방식
// 
// 어떤 명제를 바탕으로 지역 최적해를 구해 전역을 구하기 때문에 명제가 틀리면 답도 틀림
// => 일단 무식하게 -> DP -> 그리디 순으로 진행해야 한다.
// 최대한 마지막에...
//  ~ 상태에서 ~ 하는게 최선이다. 라는 명제
// input -> output 이 나올것이다. 그 후 코딩해서 검증
// 검증이 틀리면 명제 수정
// 
// 12100원을 내야함. 10000 5개, 5000 5개, 1000 5개, 100 5개
// 10000 1개, 1000 2개, 100 1개 를 내는 것이 최소의 개수를 내는 것이다.
// 경험상 답을 알 수 있음 -> 가장 큰 지폐부터 내자. 
// 이런게 그리디 이다.
//
//#include <bits/stdc++.h>	
//using namespace std;
//int ret, totalAmount = 12100;
//int main() {
//    // 각 화폐 단위와 개수를 저장한 벡터
//    vector<pair<int, int>> currency = { {10000, 5}, {5000, 5}, {1000, 5}, {100, 5} };
//
//    // 내림차순으로 정렬 (이미 내림차순이므로 불필요, 그래도 안전하게)
//    sort(currency.rbegin(), currency.rend()); // 역방향 이터레이터 -> 반대로감 : 내림차순 가능
//
//    // 사용할 화폐 단위와 개수를 저장할 벡터
//    vector<pair<int, int>> result;
//
//    // 총 금액을 계산하는 루프
//    for (auto& c : currency) {
//        int denomination = c.first;
//        int count = c.second;
//        int used = 0;
//
//        while (totalAmount >= denomination && count > 0) {
//            totalAmount -= denomination;
//            count--;
//            used++;
//        }
//
//        if (used > 0) {
//            result.push_back({ denomination, used });
//        }
//    }
//
//    // 결과 출력
//    cout << "최적의 화폐 사용 방법: " << endl;
//    for (auto& r : result) {
//        cout << r.first << "원: " << r.second << "개\n";
//    }
//
//    return 0;
//}


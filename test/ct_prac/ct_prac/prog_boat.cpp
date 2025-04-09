//#include <string>
//#include <vector>
//#include <bits/stdc++.h>
//
//using namespace std;
//
//int idx;
//int solution(vector<int> people, int limit) {
//    int answer = 0;
//    sort(people.begin(), people.end());
//
//    while (idx < people.size()) {
//        if (people[idx] + people[people.size() - 1] <= limit) {
//            idx++;
//            people.pop_back();
//            answer++;
//        }
//        else {
//            people.pop_back();
//            answer++;
//        }
//    }
//    return answer;
//}
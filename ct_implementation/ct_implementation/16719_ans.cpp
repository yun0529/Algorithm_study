//#include <iostream>
//#include <string>
//
//using namespace std;
//
//pair<char, bool> str[100]; // 문자 최대 개수
//
////문자 출력 함수
//void printWord(string word) {
//    for (int i = 0; i < word.length(); i++) {
//        // 켜져있는 것만 출력
//        if (str[i].second) cout << str[i].first;
//    }
//    cout << '\n';
//}
//// 재귀함수
//void solution(int start, int end, string word) {
//    // 최소 인덱스를 첫 값으로 
//    int minIdx = start;
//
//    // 최소값 인덱스 찾기
//    for (int i = start; i <= end; i++)
//        if (str[minIdx].first > str[i].first) minIdx = i; // 현재 idx 문자와 문자열 돌리면서 있는 문자 비교
//
//    // 스위치 온
//    str[minIdx].second = true;
//    printWord(word);
//
//    //최소값 뒤에 있는 문자열
//    if (minIdx + 1 <= end) solution(minIdx + 1, end, word);
//
//    //최소값 앞에 있는 문자열
//    if (minIdx - 1 >= start) solution(start, minIdx - 1, word);
//}
//
//int main() {
//    cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);
//    string s;
//    cin >> s;
//
//    for (int i = 0; i < s.length(); i++)
//        str[i] = make_pair(s[i], false);
//
//    solution(0, s.length() - 1, s);
//
//    return 0;
//}
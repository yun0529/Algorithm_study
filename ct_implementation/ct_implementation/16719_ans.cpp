//#include <iostream>
//#include <string>
//
//using namespace std;
//
//pair<char, bool> str[100]; // ���� �ִ� ����
//
////���� ��� �Լ�
//void printWord(string word) {
//    for (int i = 0; i < word.length(); i++) {
//        // �����ִ� �͸� ���
//        if (str[i].second) cout << str[i].first;
//    }
//    cout << '\n';
//}
//// ����Լ�
//void solution(int start, int end, string word) {
//    // �ּ� �ε����� ù ������ 
//    int minIdx = start;
//
//    // �ּҰ� �ε��� ã��
//    for (int i = start; i <= end; i++)
//        if (str[minIdx].first > str[i].first) minIdx = i; // ���� idx ���ڿ� ���ڿ� �����鼭 �ִ� ���� ��
//
//    // ����ġ ��
//    str[minIdx].second = true;
//    printWord(word);
//
//    //�ּҰ� �ڿ� �ִ� ���ڿ�
//    if (minIdx + 1 <= end) solution(minIdx + 1, end, word);
//
//    //�ּҰ� �տ� �ִ� ���ڿ�
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
////#include <bits/stdc++.h> 
////using namespace std;
////
////// (3+8)��7-9��2
////
////int n, cnt = 0, max_num = -987654321;
////string str;
////
////vector<int> num;
////vector<char> op;
////
////int oper(int a, int b, char o) {
////	if (o == '+') {
////		return a + b;
////	} else if (o == '*') {
////		return a * b;
////	}else if (o == '-') {
////		return a - b;
////	}
////}
////
////void go(int here, int sum) {
////	if (here > n - 1) {
////		max_num = max(max_num, sum);
////		return;
////	}
////	char o = (here == 0) ? '+' : str[here - 1]; // ���� ��ġ�� ���� �������� ������ ����
////
////	// ��� 1. ��ȣ ���� ���
////	if (here + 2 < n) { // �ڿ� ���ڰ� ���� ��� ��ȣ
////		int x = oper(str[here] - '0', str[here + 2] - '0', str[here + 1]);
////		go(here + 4, oper(sum, x, o));
////	}
////	// ��� 2. ��ȣ X ��� -> ���簪 + ������ ����
////	go(here + 2, oper(sum, str[here] - '0', o));
////}
////
////// ������ �����ϴ�..?
////int main() {
////	ios_base::sync_with_stdio(false);
////	cin.tie(0); cout.tie(0);
////
////	cin >> n;
////	cin >> str;
////	go(0, 0);
////	cout << max_num;
////
////	return 0;
////}
//
//#include <bits/stdc++.h>
//using namespace std;
//
//vector<int> num;
//vector<char> oper_str;
//int n, ret = -987654321;
//string s;
//void fastIO() {
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//}
//int oper(char a, int b, int c) {
//    if (a == '+') return b + c;
//    if (a == '-') return b - c;
//    if (a == '*') return b * c;
//}
//
//void go(int here, int _num) {
//    if (here == num.size() - 1) {
//        ret = max(ret, _num);
//        return;
//    }
//    go(here + 1, oper(oper_str[here], _num, num[here + 1])); // �ϳ��� ����
//
//    if (here + 2 <= num.size() - 1) {
//        int temp = oper(oper_str[here + 1], num[here + 1], num[here + 2]);
//        go(here + 2, oper(oper_str[here], _num, temp)); // ��ȣ ���� -> ������ �迭�� �ϳ��� �����ڸ� �پ�����鼭 ���� �ʿ�
//    }
//    return;
//}
//int main() {
//    fastIO();
//    cin >> n;
//    cin >> s;
//    for (int i = 0; i < n; i++) {
//        if (i % 2 == 0)num.push_back(s[i] - '0');
//        else oper_str.push_back(s[i]);
//    }
//    cout << "num : " << num.size()<<'\n';
//    cout << "oper : " << oper_str.size() << '\n';
//    go(0, num[0]);
//    cout << ret << "\n";
//    return 0;
//}
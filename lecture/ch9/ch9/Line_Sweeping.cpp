//// ���ڷ� ������ Ž���Ѵ�.
//// �������� Ž���ϸ鼭 ���𰡸� �ϴ� ��.
//// ������, ���� ���� ���� ���� Ǯ �� ���
//// but, ���׿����� ���� �Ⱦ����
//// ���� ���ѳ��� ���� �������� Ž���Ѵ�.
//// �ִ� ����, �ִ� Ƚ�� ���� ã�µ� ���� ����Ѵ�.
//// 
//// ������ ������ �װ� �ϳ��� �迭�� �����.
//// 0 ~ 10�� 0 ~ 4��� �� ������ visitied �迭�� �湮ó�� �� �������� ó���� �ֵ鸸 ī��Ʈ
//// but. ������ �ʹ� ũ�ٸ�..?
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
//    sort(L, L + n); // ���۽ð� ���� ����
//    l = L[0].first; r = L[0].second;
//    for (int i = 1; i < n; i++) {
//        if (r < L[i].first) { // �������� �� �ð��� ���������� ���� ������
//            ret += (r - l); // ������ �ð� ����
//            l = L[i].first; 
//            r = L[i].second;
//        }
//        else if (L[i].first <= r && L[i].second >= r) {
//            r = L[i].second; // �̹��� �������� �������� ������ ����
//        }
//    }
//    ret += r - l;
//    cout << ret << '\n';
//}
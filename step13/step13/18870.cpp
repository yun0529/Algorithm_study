//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//int main() {
//    int n;
//    long long temp;
//    vector<long> x1;
//    vector<long> x2;
//    cin >> n;
//    for (int i = 0; i < n; i++) {
//        cin >> temp;
//        x1.push_back(temp); // ���� ����
//        x2.push_back(temp); // ���� ����
//    }
//    sort(x1.begin(), x1.end()); // ����
//    x1.erase(unique(x1.begin(), x1.end()), x1.end()); // �ߺ��� ����
//
//    for (int i = 0; i < n; i++) {
//        cout << lower_bound(x1.begin(), x1.end(), x2[i]) - x1.begin() << " "; // x2[i] �̻��� ���ڰ� x1���� �� ��°���� - vector�� ù ��° �ּ�
//        // �� ��°�� ���� ������ ����
//    }
//} // lower_bound �̿� �Լ� 
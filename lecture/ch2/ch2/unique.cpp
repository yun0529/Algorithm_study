#include <bits/stdc++.h>
using namespace std;
vector<int> v{ 2, 2, 1, 1, 2, 2, 3, 3, 5, 6, 7, 8, 9 };
// 2  1  2  3  5  6  7  8  9  6  7  8  9 sort�� �Ἥ �������־���� 
int main() {

    vector<int> vm{ 1,1,2,2,3,3 }; 
    map<int, int> mp;
    for (int i : vm) { // map ����� �ߺ� ����
        if (mp[i]) {
            continue;
        }
        else {
            mp[i] = 1;
        }
    }

    vector<int> ret;
    for (auto it : mp) {
        ret.push_back(it.first);
    }
    for (int i:ret)cout << i << '\n';

    cout << "\n";

    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end()); // ����ũ �̷����Ͱ� �ߺ� ���ĸ� ����Ű�µ� �� �ڸ� �� ���� 
    for (int i : v) cout << i << " ";
    cout << '\n';

    return 0;
}
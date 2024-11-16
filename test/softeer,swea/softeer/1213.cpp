#include<bits/stdc++.h>
using namespace std;

int n, cnt;
string find_str, str;

int main() {

    ios_base::sync_with_stdio(false);
    cout.tie(NULL); cin.tie(NULL);

    int test_case;
    int T;
    cin >> T;

    for (test_case = 1; test_case <= T; ++test_case)
    {
        cin >> n >> find_str >> str;
        cnt = 0;

        while (str.find(find_str) != string::npos) {
            str.replace(str.find(find_str), find_str.length(), "");
            cnt++;
        }

        //for (int i = 0; i < str.length(); i++) {

        //}
        cout << '#' << n << ' ' << cnt << '\n';
    }

    return 0;
}
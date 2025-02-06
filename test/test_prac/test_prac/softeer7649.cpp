#include<iostream>
#include<vector>

using namespace std;

int n, m, visited[5004], mx;
//vector<char> edge[5004];
string str;
vector<pair<int, char>> v[5004];
vector<pair<int, int>> dp(5004, { 0,0 });

void go(int here) {
    visited[here] = 1;
    for (auto there : v[here]) {
        if (visited[there.first]) continue;
        bool flag = true;

        for (int i = dp[here].second + 1;i <= str.length();i++) { // 이전값의 다음부터 시작
            if (there.second == str[i - 1]) {
                dp[there.first] = { dp[here].first + 1,i }; // cnt, idx 저장
                flag = false;
                break;
            }
        }
        if (flag) dp[there.first] = dp[here];
        mx = max(mx, dp[there.first].first);
        go(there.first);
    }
}

int main(int argc, char** argv)
{
    cin >> n >> m;
    cin >> str;
    int s, d;
    char e;

    for (int i = 0;i < m;i++) {
        cin >> s >> d >> e;
        v[s].push_back({ d,e });
        //edge[s].puch_back(e);
    }
    for (int i = 1;i <= n;i++) {
        cout << v[i] << ' ';
    }
    go(1);
    cout << mx;
    return 0;
}
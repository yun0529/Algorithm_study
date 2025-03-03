#if 0
#include<iostream>
#include<vector>

using namespace std;

int n, m, mx;
bool visited[5004];
string str;
vector<pair<int, char>> v[5004]; // 목적지, 간선
int dp[5004][5004];

void go(int here, int d) {
    visited[here] = true;
    bool flag = true;
    for (auto there : v[here]) {
        if (visited[there.first]) continue;
        flag = false;
        //cout<<there<<' ';

        for (int i = 1; i <= m; i++) { // 아버지 문자열과 비교
            
            int sum = there.second == str[i - 1] ? 1 : 0; // 동일하면 + 1
            dp[d+1][i] = max(dp[d][i-1] + sum, max(dp[d][i], dp[d + 1][i - 1])); // LCS 갯수 확인
            //nextCnt += 1;
            //cout<<"there:cnt:idx:edge = "<<there.first<<":"<<dp[there.first].first
            //    <<":"<<dp[there.first].second<< ":"<<there.second << '\n';
            flag = false;
            
        }
        //if (flag) dp[there.first] = dp[here];
        //mx = max(mx, nextCnt);
        go(there.first, d + 1);
        visited[there.first] = false;
    }
    if (flag) {
        for (int i = 0;i <= m;i++) { // 마지막 노드일 때 max값 확인
            mx = max(mx, dp[d][i]);
        }
        //for (int j = 0;j <= d+1;j++) {
        //    for (int k = 0;k <= m;k++) {
        //        cout << dp[j][k] << ' ';
        //    }
        //    cout << '\n';
        //}cout << "--------------\n";
    }
}

int main(int argc, char** argv)
{
    cin >> n >> m;
    cin >> str;
    int s, d;
    char e;

    for (int i = 0; i < n - 1; i++) {
        cin >> s >> d >> e;
        v[s].push_back({ d ,e });
        v[d].push_back({ s ,e });
    }
    //for (int i = 1; i <= n; i++) {
    //    cout << i<<":" << edge[i] << ',';
    //}cout<<'\n';
    go(1, 0);
    cout << mx;
    return 0;
}
#endif
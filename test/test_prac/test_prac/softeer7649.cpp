#include<iostream>
#include<vector>

using namespace std;

int n, m, mx;
bool visited[5004];
//char edge[5004];
string str;
vector<pair<int,char>> v[5004]; // 목적지, 간선
pair<int, int> dp[5004];

void go(int here) {
    visited[here] = true;
    for (auto there : v[here]) {
        if (visited[there.first]) continue;
        bool flag = true;
        //cout<<there<<' ';
        for (int i = dp[here].second + 1; i <= m; i++) { // 이전값의 다음부터 시작
            if (there.second == str[i - 1]) {
                dp[there.first] = { dp[here].first + 1,i }; // cnt, idx 저장
                cout<<"there:cnt:idx:edge = "<<there.first<<":"<<dp[there.first].first
                    <<":"<<dp[there.first].second<< ":"<<there.second << '\n';
                flag = false;
                break;
            }
        }
        if (flag) dp[there.first] = dp[here];
        mx = max(mx, dp[there.first].first);
        go(there.first);
        visited[there.first] = false;
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
        v[s].push_back({ d ,e});
        v[d].push_back({ s ,e });
        //if (edge[d] <= 'Z' && edge[d] >= 'A') {
        //    edge[s] = e;
        //}
        //else {
        //    edge[d] = e;
        //}
    }
    //for (int i = 1; i <= n; i++) {
    //    cout << i<<":" << edge[i] << ',';
    //}cout<<'\n';
    go(1);
    cout << mx;
    return 0;
}
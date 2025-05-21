#if 0
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;
vector<int> emoti;
vector<vector<int>> user;
int rate[4] = { 10,20,30,40 };
int ret_plus = 0;
int ret_sum = 0;

void go(vector<int> b) {
    if (b.size() == emoti.size()) { // 모든 이모티콘 할인율 골랐으면 확인
        int total_sum = 0; // 전체 가격 합
        int plus = 0; // 이모티콘 플러스 가입 수 
        for (int i = 0;i < user.size();i++) {
            int sum = 0; // 현재 유저의 구매 가격
            for (int j = 0;j < b.size();j++) { // 이모티콘이 얼마나 할인하는지 확인하면서 구매
                if (rate[b[j]] >= user[i][0]) {
                    // 구매
                    sum += (emoti[j] * (100 - rate[b[j]])) / 100;
                }
            }
            if (sum >= user[i][1]) plus++; // 기준 가격 이상이면 플러스 구매
            else total_sum += sum; // 이하면 전체 가격에 추가
        }
        if (ret_plus < plus) {
            ret_plus = plus;
            ret_sum = total_sum;
            cout << "sum : " << total_sum << ", plus : " << plus << '\n';
        }
        else if (ret_plus == plus && ret_sum < total_sum) {
            ret_sum = total_sum;
        }
        return;
    }
    for (int i = 0;i < 4;i++) {
        b.push_back(i);
        go(b);
        b.pop_back();
    }
}

// n명의 구매 기준, m개의 정가를 담은 이모티콘 수
vector<int> solution(vector<vector<int>> users, vector<int> emoticons) {
    vector<int> answer;
    user = users;
    emoti = emoticons;

    // for(int i = 0;i <= 4;i++) emoti.push_back(i);
    vector<int> b;
    go(b);
    // for(int i = 0;i < 4;i++){
    //     for(int j = 0;j < emoticons.size();j++){
    //         cout<<(emoti[j] * (100 - rate[i]))/100<<' ';
    //     }cout<<'\n';
    // }

    answer.push_back(ret_plus);
    answer.push_back(ret_sum);

    return answer;
}
#endif
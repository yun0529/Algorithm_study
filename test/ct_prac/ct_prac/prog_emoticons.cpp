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
    if (b.size() == emoti.size()) { // ��� �̸�Ƽ�� ������ ������� Ȯ��
        int total_sum = 0; // ��ü ���� ��
        int plus = 0; // �̸�Ƽ�� �÷��� ���� �� 
        for (int i = 0;i < user.size();i++) {
            int sum = 0; // ���� ������ ���� ����
            for (int j = 0;j < b.size();j++) { // �̸�Ƽ���� �󸶳� �����ϴ��� Ȯ���ϸ鼭 ����
                if (rate[b[j]] >= user[i][0]) {
                    // ����
                    sum += (emoti[j] * (100 - rate[b[j]])) / 100;
                }
            }
            if (sum >= user[i][1]) plus++; // ���� ���� �̻��̸� �÷��� ����
            else total_sum += sum; // ���ϸ� ��ü ���ݿ� �߰�
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

// n���� ���� ����, m���� ������ ���� �̸�Ƽ�� ��
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
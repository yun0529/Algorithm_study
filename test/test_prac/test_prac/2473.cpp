#if 0
#include <iostream>
#include <algorithm>
typedef long long ll;
using namespace std;

ll N, arr[5004];
ll ret = 4e9; // |ret| 해서 절댓값이 작은 값을 저장
ll result[3];
// 투포인터
// ll r = N-1;

void input_data() {
    cin >> N;
    for (int i = 0;i < N;i++) {
        cin >> arr[i];
    }
}

//bool bin_search(ll mid) {
//    ll sum = arr[l] + arr[mid] + arr[r];
//    if (abs(sum) < abs(ret)) {
//        ret = sum;
//        return true;
//    }
//    else return false;
//}

void solution() {
    sort(arr, arr + N);
   
    for (int i = 0;i < N-2;i++) {
        ll r = N - 1;
        ll mid = i+1;
        while (mid < r) {
            //bool flag = bin_search(mid);
            //cout << flag;
            ll sum = arr[i] + arr[mid] + arr[r];
            if (abs(sum) < ret) {
                ret = abs(sum);
                result[0] = arr[i];
                result[1] = arr[mid];
                result[2] = arr[r];
                if (ret == 0) return;
            }
            if (sum < 0) mid++;
            else {
                r--;
            }
        }
    }
}
void print_result() {
    for (int i = 0;i < 3;i++) {
        cout << result[i] << ' ';
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    input_data();
    solution();
    //cout << ret<<'\n';
    print_result();

    return 0;
}
#endif
#if 0
#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

int n, arr[604], s_sum, i_sum, ret = 2e9;

int main(int argc, char** argv)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int s_to, s_bo, i_to, i_bo;
    for (int i = 0; i < n-3; i++) {
        for (int j = i+3; j < n; j++) {
            s_sum = arr[i] + arr[j];
            i_to = i + 1; i_bo = j - 1;
            while (i_to < i_bo) {
                i_sum = arr[i_to] + arr[i_bo];
                if (abs(s_sum - i_sum) < ret) {
                    ret = abs(s_sum - i_sum);
                }
                if (s_sum > i_sum) {
                    i_to++;
                }
                else i_bo--;
            }
        }
    }

    cout << ret;

    return 0;
}
#endif
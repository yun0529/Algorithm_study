#if 0
#include<iostream>
#include<algorithm>
using namespace std;

int dp[301];
int arr[301];
int main(void)
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> arr[i];

	dp[1] = arr[1];
	dp[2] = arr[1] + arr[2];
	dp[3] = max(arr[1] + arr[3], arr[2] + arr[3]);

	for (int i = 4; i <= n; i++)
		// 연속 3칸 못올라감
		// 한 번에 2계단 올라갈 수 있음
		// 0부터 한계단인듯.
		// 첫 계단 밟고 두계단 + 1계단 1계단 으로 목적지 도달
		// 첫 계단 안밟고 두번째 계단 부터 두칸씩
		// 1-3-5, 2-4-5, 2-3-5 -> n-3 + n-1 + n , (n = 2부터)n-2 + n
		dp[i] = max(dp[i - 2] + arr[i], dp[i - 3] + arr[i - 1] + arr[i]);

	cout << dp[n];
	return 0;
}
#endif // 01
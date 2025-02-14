#if 0
#include <iostream>
#include <algorithm>

using namespace std;

int N, M, sum_cost = 0;
int arr[101];
int crr[101];
int dp[101][10001];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	cin >> N >> M;

	for (int i = 1; i <= N; i++)
		cin >> arr[i];

	for (int i = 1; i <= N; i++)
	{
		cin >> crr[i];
		sum_cost += crr[i];	// 모든 cost의 합을 계산
	}

	/* 배낭 문제(DP 활용)
	* dp[i][j] = i번째 앱까지 탐색했을 때, j 비용을 소모해서 얻을 수 있는 최대 메모리
	* case 1) 현재 j 비용보다 i번째 앱의 cost가 작을 경우
	*  - (i - 1)번째 앱에서 j 비용일 때 최대 메모리 값 기록
	* case 2) 현재 j 비용보다 i번째 앱의 cost가 크거나 같은 경우
	*  - max((i - 1)번째 앱에서 j 비용일 때 최대 메모리 값, 
	* (i - 1)번째 앱에서 (j - i번째 앱의 cost)의 최대 메모리 값 + i번째 앱의 메모리량)
	*/
	for (int i = 1; i <= N; i++)
	{
		for (int j = 0; j <= sum_cost; j++)
		{
			if (j - crr[i] >= 0)	// case 2
				dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - crr[i]] + arr[i]);
			else  // case 1
				dp[i][j] = dp[i - 1][j];
		}
	}

	// N번째 앱에서 메모리량이 M 이상 확보가 가능한 순간의 비용을 출력
	for (int i = 0; i <= sum_cost; i++)
	{
		if (dp[N][i] >= M)
		{
			cout << i << '\n';
			break;
		}
	}

	return 0;
}
#endif
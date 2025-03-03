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
		sum_cost += crr[i];	// ��� cost�� ���� ���
	}

	/* �賶 ����(DP Ȱ��)
	* dp[i][j] = i��° �۱��� Ž������ ��, j ����� �Ҹ��ؼ� ���� �� �ִ� �ִ� �޸�
	* case 1) ���� j ��뺸�� i��° ���� cost�� ���� ���
	*  - (i - 1)��° �ۿ��� j ����� �� �ִ� �޸� �� ���
	* case 2) ���� j ��뺸�� i��° ���� cost�� ũ�ų� ���� ���
	*  - max((i - 1)��° �ۿ��� j ����� �� �ִ� �޸� ��, 
	* (i - 1)��° �ۿ��� (j - i��° ���� cost)�� �ִ� �޸� �� + i��° ���� �޸𸮷�)
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

	// N��° �ۿ��� �޸𸮷��� M �̻� Ȯ���� ������ ������ ����� ���
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
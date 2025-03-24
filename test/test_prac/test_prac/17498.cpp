#if 0
#include <iostream>
typedef long long ll;
using namespace std;

int n, m, d;
int** arr; // n*m <= 200,000 -> n = 2, m = 100,000 �� �� ����
int** dp;
ll ret = -1e15;

void input_data() {
	cin >> n >> m >> d;
	arr = (int**)malloc(n * sizeof(int*)); // 2���� �迭 ũ�� �Ҵ�
	dp = (int**)malloc(n * sizeof(int*));

	for (int i = 0; i < n; i++) {
		arr[i] = (int*)calloc(m, sizeof(ll)); // �� �� �Ҵ�
		dp[i] = (int*)calloc(m, sizeof(ll));
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> arr[i][j];
			//scanf_s("%d", &arr[i][j]);
		}
	}
	for (int i = 1; i < n; i++) {
		fill(&dp[i][0], &dp[i][0] + m, -1e12); // ������ �� �ּҰ����� �ʱ�ȭ

	}
}

void check_dp(int y, int x) {
	for (int i = y + 1; i <= y + d; i++) {
		if (i >= n) return;
		//int minx = x - (d - (i - y)) < 0 ? 0 : x - (d - (i - y)); // x ����
		//int maxx = x + (d - (i - y)) > m-1 ? m - 1 : x + (d - (i - y)); // x ����
		for (int j = x - d; j <= x + d; j++) {
			if (abs(y - i) + abs(x - j) > d || j < 0 || j >= m) continue;
			dp[i][j] = max(dp[i][j], dp[y][x] + (arr[i][j] * arr[y][x]));
			if (ret < dp[i][j]) ret = dp[i][j];
			//cout << ret << ' ';
		}
	}
}

void solution() {

	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < m; j++) {
			check_dp(i, j);
		}
	}
	cout << ret;
}

void print_dp() {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << dp[i][j] << ' ';
		}
		cout << '\n';
	}
}

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	input_data();
	//print_dp();
	solution();
	//print_dp();

	return 0;
}

#endif
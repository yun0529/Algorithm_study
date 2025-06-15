#if 0
#include <iostream>
#include <vector>
using namespace std;

int arr[4][20];
bool brr[4] = { false,false,false,false };

int cnt(int num) {
	int sum = 0;
	for (int i = 5;i > 5 - num;i--) {
		sum += i;
	}
	return sum;
}

void combi(int idx, vector<int> b, int num) {
	if (b.size() == 15) {
		// 1 : 승
		// 2 : 무
		// 3 : 패
		int cnt = 0;
		int ret[6][3] = { 0, };
		for (int i = 0;i < 5;i++) {
			for (int j = i+1;j < 6;j++) {
				if (b[cnt] == 1) {
					ret[i][0]++;
					ret[j][2]++;
				}
				else if (b[cnt] == 2) {
					ret[i][1]++;
					ret[j][1]++;
				}
				else if (b[cnt] == 3) {
					ret[i][2]++;
					ret[j][0]++;
				}
				cnt++;
			}
		}

		for (int t = 0;t < 4;t++) {
			bool flag = true;
			if (brr[t]) continue;
			for (int j = 0; j < 6; j++) {
				for (int k = 0; k < 3; k++) {
					if (arr[t][j * 3 + k] != ret[j][k]) {
						flag = false;
						break;
					}
				}
			}
			if (flag) {
				brr[t] = true;
			}
		}
		return;
	}
	else if (b.size() == cnt(num)) { // 다음 팀으로
		combi(-1, b, num + 1);
		return;
	}
	for (int i = idx + 1;i < 6 - num;i++) {
		b.push_back(1);
		combi(i, b, num);
		b.pop_back();

		b.push_back(2);
		combi(i, b, num);
		b.pop_back();

		b.push_back(3);
		combi(i, b, num);
		b.pop_back();
	}
}

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);

	for (int i = 0;i < 4;i++) {
		for (int j = 0;j < 18;j++) {
			cin >> arr[i][j];
		}
	}
	vector<int>	b;
	combi(-1, b, 1);
	for (int i = 0; i < 4;i++) {
		if (brr[i]) cout << 1 << ' ';
		else cout << 0 << ' ';
	}
	return 0;
}
#endif // 01

#if 0 // 수정
#include <iostream>
#include <vector>
using namespace std;

vector<pair<int, int>> matches;

void combi(int n, int r, int* arr, int start, vector<int>& v) {
	if (v.size() == r) {
		matches.push_back({ v[0], v[1] });
		return;
	}
	for (int i = start + 1; i < n; i++) {
		v.push_back(arr[i]);
		combi(n, r, arr, i, v);
		v.pop_back();
	}
}

bool isValid(vector<vector<int>>& results, int matchIdx) {
	if (matchIdx == 15) {
		for (int i = 0; i < 6; i++) {
			if (results[i][0] != 0 || results[i][1] != 0 || results[i][2] != 0)
				return false;
		}
		return true;
	}
	int teamA = matches[matchIdx].first;
	int teamB = matches[matchIdx].second;

	if (results[teamA][0] > 0 && results[teamB][2] > 0) {
		results[teamA][0]--; results[teamB][2]--;
		if (isValid(results, matchIdx + 1)) return true;
		results[teamA][0]++; results[teamB][2]++;
	}
	if (results[teamA][1] > 0 && results[teamB][1] > 0) {
		results[teamA][1]--; results[teamB][1]--;
		if (isValid(results, matchIdx + 1)) return true;
		results[teamA][1]++; results[teamB][1]++;
	}
	if (results[teamA][2] > 0 && results[teamB][0] > 0) {
		results[teamA][2]--; results[teamB][0]--;
		if (isValid(results, matchIdx + 1)) return true;
		results[teamA][2]++; results[teamB][0]++;
	}
	return false;
}

int main() {
	vector<vector<int>> allGames(4, vector<int>(18));
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 18; j++) {
			cin >> allGames[i][j];
		}
	}

	// 경기쌍을 단 한 번만 만든다.
	matches.clear();
	int arr[] = { 0, 1, 2, 3, 4, 5 };
	vector<int> temp;
	combi(6, 2, arr, -1, temp);

	for (int i = 0; i < 4; i++) {
		vector<vector<int>> eachGames(6, vector<int>(3));
		for (int j = 0; j < 6; j++) {
			eachGames[j][0] = allGames[i][j * 3];
			eachGames[j][1] = allGames[i][j * 3 + 1];
			eachGames[j][2] = allGames[i][j * 3 + 2];
		}
		if (isValid(eachGames, 0))
			cout << "1 ";
		else
			cout << "0 ";
	}
	return 0;
}
#endif // 01
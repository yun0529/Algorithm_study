#if 0
#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
using namespace std;

int n, m, k, year;
int arr[11][11], nut[11][11];
int dy[] = { -1,0,1,0, -1,1,1,-1 }; // 상, 우, 하, 좌, 상우, 하우, 하좌, 상좌
int dx[] = { 0,1,0,-1, 1,1,-1,-1 };
vector<int> tree[11][11];

void plus_tree(int y, int x);
void spring_summer();
void fall();
void winter();
int count_tree();
void print_tree();
void (*session[3])() = { spring_summer,fall,winter };
void solution();
void input_data();

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	input_data();
	solution();
	cout << count_tree();

	return 0;
}

void input_data() {
	cin >> n >> m >> k;
	fill(&arr[0][0], &arr[0][0] + 11 * 11, 5); // 초기화

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> nut[j][i];
		}
	}
	int x, y, z;
	for (int i = 0; i < m; i++) {
		cin >> x >> y >> z;
		tree[y - 1][x - 1].push_back(z); // 어린 나무 앞으로
	}
}

void plus_tree(int y, int x) {
	int ny;
	int nx;
	for (int i = 0; i < 8; i++) {
		ny = y + dy[i];
		nx = x + dx[i];
		if (ny < 0 || nx < 0 || ny >= n || nx >= n) continue;
		tree[ny][nx].push_back(1);
	}
}

void spring_summer() { // 봄 여름 같이 수행
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (tree[i][j].size() == 0) continue;
			int sum_nut = 0;
			vector<int> tmp; // 나무 임시 저장용
			int size = tree[i][j].size();
			sort(tree[i][j].begin(), tree[i][j].end()); // 어린 나부 부터
			for (int k = 0; k < size; k++) {
				int age = tree[i][j][k];
				if (arr[i][j] >= age) { // 나이 증가
					arr[i][j] -= age;
					tmp.push_back(age + 1);
				}
				else { // 죽음
					sum_nut += (age / 2);
				}
			}
			tree[i][j].clear();
			arr[i][j] += sum_nut; // 죽은 나무 양분 추가
			for (int k = 0; k < tmp.size(); k++) { // 나무 다시 옮기기
				tree[i][j].push_back(tmp[k]);
			}
		}
	}
}
void fall() {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (tree[i][j].size() == 0) continue;
			int size = tree[i][j].size();
			for (int k = 0; k < size; k++) {
				if (tree[i][j][k] % 5 == 0) { // 번식 가능
					plus_tree(i, j);
				}
			}
		}
	}
}
void winter() { // 양분 추가
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			arr[i][j] += nut[i][j];
		}
	}
	//print_tree();
}
int count_tree() {
	int ret = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			ret += tree[i][j].size();
		}
	}
	return ret;
}
void print_tree() {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << tree[i][j].size() << ' ';
		}
		cout << '\n';
	}
	cout << "----------------------" << year / 3 << '\n';
}
void solution() {
	while (year / 3 < k) {
		session[year % 3]();
		year++;
	}
}

#endif
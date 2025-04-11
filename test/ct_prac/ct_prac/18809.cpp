#if 0
#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <tuple>
using namespace std;

int n, m, g, r, cnt;
int arr[51][51], tmp[51][51], checkColor[2][51][51];
vector<pair<int,int>> v;

int dy[] = { -1, 0, 1, 0 };
int dx[] = { 0, 1, 0, -1 };
priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> q; // sec, y,x

void bfs() {
	while (q.size()) {
		int y = q.top().second.first;
		int x = q.top().second.second;
		int sec = q.top().first;
		q.pop();
		if (sec > 3 || arr[y][x] == -1) continue;
		for (int i = 0; i < 4; i++) {
			int ny = y + dy[i];
			int nx = x + dx[i];
			//cout << '-';
			if (ny < 0 || nx < 0 || ny >= n || nx >= m) continue;
			if (arr[ny][nx] == 0 || arr[ny][nx] == -1) continue;
			if (checkColor[(arr[y][x] + 1) % 2][ny][nx] != 0) continue; // �ڱ� ���� �̹� ��������

			if (sec == checkColor[arr[ny][nx]%2][ny][nx]) { // �ٸ� ���� sec�� ������ �� 
				cnt++;
				arr[ny][nx] = -1;
			}
			else if(arr[ny][nx] != 3 && arr[ny][nx] != 4){ // �� ĭ�̸� 
				arr[ny][nx] = arr[y][x];
				checkColor[(arr[y][x] + 1)%2][ny][nx] = sec; // �ش� ���� �� �Ҵ�
				q.push({ sec + 1,{ny,nx} });
			}
		}
	}
}

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n >> m >> g >> r;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> arr[i][j];
			tmp[i][j] = arr[i][j];
			if (arr[i][j] == 2) {
				v.push_back({ i,j }); // ���� �Ѹ� �� �ִ� ĭ
			}
		}
	}
	vector<int> idx;
	for (int i = 0; i < v.size(); i++) {
		idx.push_back(i);
	}
	int ret = 0;
	do {
		// arr �ʱ�ȭ
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				arr[i][j] = tmp[i][j];
			}
		}
		fill(&checkColor[0][0][0], &checkColor[0][0][0] + 2 * 51 * 51, 0); // chechColor �ʱ�ȭ
		cnt = 0; // cnt �ʱ�ȭ
		while (q.size()) q.pop(); // q �ʱ�ȭ

		// r, g �Ҵ�
		for (int i = 0; i < r; i++) {
			arr[v[i].first][v[i].second] = 3;
			q.push({ 0, {v[i].first,v[i].second}});
			checkColor[0][v[i].first][v[i].second] = 1;
		}
		for (int i = r; i < r+g; i++) {
			arr[v[i].first][v[i].second] = 4;
			q.push({ 0, {v[i].first,v[i].second} });
			checkColor[1][v[i].first][v[i].second] = 1;
		}
		bfs();
		if (ret < cnt) ret = cnt; // �ִ� ����

	} while (next_permutation(idx.begin(), idx.end()));

	cout << ret;

	return 0;
}

//void combi(int start, vector<int> b) {
//	if (b.size() == (g + r)) {
//		gry.clear();
//		for (int idx : b) {
//			gry.push_back(v[idx]);
//		}
//		for (int iter : gry) {
//			arr[]
//		}
//		go(0);
//		return;
//	}
//	for (int i = start + 1; i < v.size(); i++) {
//		b.push_back(i);
//		combi(i, b);
//		b.pop_back();
//	}
//}
#endif // ����.. -> �ð��ʰ�

#if 0
#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int n, m, g, r, cnt;
int arr[51][51], tmp[51][51];
int checkTime[2][51][51]; // �ʷ�(0), ����(1)�� �� ��ġ ���� �ð�
int flower[51][51]; // �� Ȯ��
vector<pair<int, int>> v;

int dy[] = { -1, 0, 1, 0 };
int dx[] = { 0, 1, 0, -1 };

struct Info {
    int sec;
    int color; // 0: green, 1: red
    int y, x;
};

queue<Info> q;

void bfs() {
    while (q.size()) {
        Info cur = q.front(); q.pop();

        if (flower[cur.y][cur.x]) continue; // ���� �� �ڸ�
		// if (cur.sec > 4)continue;
        for (int i = 0; i < 4; i++) {
            int ny = cur.y + dy[i];
            int nx = cur.x + dx[i];

            if (ny < 0 || nx < 0 || ny >= n || nx >= m) continue;
            if (arr[ny][nx] == 0) continue; // ȣ��

            // �ٸ� ��
            int otherColor = 1 - cur.color;

            // ���� �� ���� �������� �ʾҰ�, �ɵ� �ƴ϶��
            if (checkTime[cur.color][ny][nx] == 0 && flower[ny][nx] == 0) {
                checkTime[cur.color][ny][nx] = cur.sec + 1;

                // ��� ���� ���� �ð��� ���������� ��
                if (checkTime[otherColor][ny][nx] == cur.sec + 1) {
                    cnt++;
                    flower[ny][nx] = 1;
                }
                else {
                    q.push({ cur.sec + 1, cur.color, ny, nx });
                }
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> n >> m >> g >> r; 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
            tmp[i][j] = arr[i][j];
            if (arr[i][j] == 2) v.push_back({ i,j }); // ���� �Ѹ� �� �ִ� ĭ
        }
    }

    vector<int> idx;
    for (int i = 0; i < v.size(); i++) {
        idx.push_back(i);
    }
    int ret = 0;

    vector<int> pick(v.size(), 0);
    fill(pick.end() - (r + g), pick.end(), 1); // ���� �Ѹ� ��ġ r+g�� ����

    do {
        vector<int> selectedIdx;
        for (int i = 0; i < v.size(); i++) {
            if (pick[i]) selectedIdx.push_back(i);
        }

        vector<int> colorMask(r + g, 0); // 0: green, 1: red
        fill(colorMask.begin(), colorMask.begin() + r, 1); // ���� r���� ������

        do {
            // �ʱ�ȭ
            cnt = 0;
            q = queue<Info>();
            for (int i = 0; i < n; i++)
                for (int j = 0; j < m; j++) {
                    arr[i][j] = tmp[i][j];
                    flower[i][j] = 0;
                    checkTime[0][i][j] = 0;
                    checkTime[1][i][j] = 0;
                }

            for (int i = 0; i < r + g; i++) {
                int y = v[selectedIdx[i]].first;
                int x = v[selectedIdx[i]].second;
                int color = colorMask[i];
                checkTime[color][y][x] = 1;
                q.push({ 1, color, y, x });
            }

            bfs();
            ret = max(ret, cnt);

        } while (next_permutation(colorMask.begin(), colorMask.end()));

    } while (next_permutation(pick.begin(), pick.end()));

    cout << ret << '\n';
    return 0;
}

#endif // ���� -> Ʋ�� -> ���� �������� Ʋ����...

#if 01
#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int n, m, g, r;
int arr[51][51], tmp[51][51];
int checkTime[2][51][51], flower[51][51];
int dy[4] = { -1, 0, 1, 0 };
int dx[4] = { 0, 1, 0, -1 };
int ret = 0;

vector<pair<int, int>> v;

struct Info {
    int sec, color, y, x;
};
queue<Info> q;

void bfs() {
    while (!q.empty()) {
        Info cur = q.front(); q.pop();
        if (flower[cur.y][cur.x]) continue;

        for (int dir = 0; dir < 4; dir++) {
            int ny = cur.y + dy[dir];
            int nx = cur.x + dx[dir];

            if (ny < 0 || nx < 0 || ny >= n || nx >= m) continue;
            if (arr[ny][nx] == 0) continue;

            int other = 1 - cur.color;

            if (checkTime[cur.color][ny][nx] == 0 && flower[ny][nx] == 0) {
                checkTime[cur.color][ny][nx] = cur.sec + 1;

                if (checkTime[other][ny][nx] == cur.sec + 1) {
                    flower[ny][nx] = 1;
                    continue;
                }

                q.push({ cur.sec + 1, cur.color, ny, nx });
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> n >> m >> g >> r;
    for (int i = 0; i < n; i++) for (int j = 0; j < m; j++) {
        cin >> arr[i][j];
        tmp[i][j] = arr[i][j];
        if (arr[i][j] == 2) v.push_back({ i, j });
    }

    int sz = v.size();
    int greenPick[10] = { 0 };
    fill(greenPick + sz - g, greenPick + sz, 1); // green ����

    do {
        vector<int> greenIdx;
        for (int i = 0; i < sz; i++) {
            if (greenPick[i]) greenIdx.push_back(i); // green ��ġ idx �Է�
        }

        // red ��� �ĺ�: green�� ������ ��ġ
        vector<int> redTarget;
        for (int i = 0; i < sz; i++) {
            if (!greenPick[i]) redTarget.push_back(i); // green ��ġ �ƴϸ�
        }

        if (redTarget.size() < r) continue; // �߸� ������� -> green�� ������ ���

        int redPick[10] = { 0 };
        fill(redPick + redTarget.size() - r, redPick + redTarget.size(), 1); // red ����

        do {
            vector<int> redIdx;
            for (int i = 0; i < redTarget.size(); i++) {
                if (redPick[i]) redIdx.push_back(redTarget[i]); // red ��ġ ����
            }

            // �ʱ�ȭ
            int localCnt = 0;
            q = queue<Info>();
            for (int i = 0; i < n; i++) for (int j = 0; j < m; j++) {
                arr[i][j] = tmp[i][j];
                flower[i][j] = 0;
                checkTime[0][i][j] = checkTime[1][i][j] = 0;
            }

            // ���� ������ �ʱ�ȭ
            for (int i : greenIdx) {
                int y = v[i].first, x = v[i].second;
                checkTime[0][y][x] = 1;
                q.push({ 1, 0, y, x });
            }
            for (int i : redIdx) {
                int y = v[i].first, x = v[i].second;
                checkTime[1][y][x] = 1;
                q.push({ 1, 1, y, x });
            }

            bfs();

            // �� ���� ����
            int flowerCnt = 0;
            for (int i = 0; i < n; i++) for (int j = 0; j < m; j++)
                if (flower[i][j]) flowerCnt++;

            ret = max(ret, flowerCnt);

        } while (next_permutation(redPick, redPick + redTarget.size()));

    } while (next_permutation(greenPick, greenPick + sz));

    cout << ret << "\n";
    return 0;
}
#endif // 01


#if 01
#include <iostream>
#include <vector>
using namespace std;

int n, m, K, c;
int arr[24][24], visited[24][24], kill_year[24][24];

int dy[] = { -1, 0, 1, 0 };
int dx[] = { 0, 1, 0, -1 };

int ey[] = { -1,1,1,-1 }; // 왼위, 왼아, 오아, 오위
int ex[] = { 1,1,-1,-1 };

int checkTreeCnt(int y, int x);
void grow();
void seed();
int checkKillTreeCnt(int y, int x);
int kill();
void nextYear();
void showMap();

void solution() {
    int cnt = 0;
    fill(&kill_year[0][0], &kill_year[0][0] + 24 * 24, -1);
    for (int i = 0;i < m;i++) {
        cout << '\n' << i << '\n';
        grow();
        showMap();
        seed();
        showMap();
        cnt += kill();
        showMap();
        nextYear();
    }
    cout << cnt;
}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> n >> m >> K >> c; // 크기, 과정 횟수, 범위, 제초제 유효 기간

    for (int i = 0;i < n;i++) {
        for (int j = 0;j < n;j++) {
            cin >> arr[i][j];
        }
    }

    solution();

    return 0;
}
int checkTreeCnt(int y, int x) {
    int cnt = 0;
    for (int k = 0;k < 4;k++) {
        int ny = y + dy[k];
        int nx = x + dx[k];
        if (ny < 0 || nx < 0 || ny >= n || nx >= n) continue;
        if (arr[ny][nx] > 0) cnt++;
    }
    return cnt;
}
void grow() { // 성장
    for (int i = 0;i < n;i++) {
        for (int j = 0;j < n;j++) {
            if (arr[i][j] <= 0) continue;
            arr[i][j] += checkTreeCnt(i, j);
        }
    }
}
void seed() { // 번식
    for (int i = 0;i < n;i++) {
        for (int j = 0;j < n;j++) {
            int cnt = 0;
            if (arr[i][j] <= 0) continue;
            if (kill_year[i][j] > 0) continue;  // 제초제 있으면 번식 못함
            for (int k = 0;k < 4;k++) {
                int ny = i + dy[k];
                int nx = j + dx[k];
                if (ny < 0 || nx < 0 || ny >= n || nx >= n) continue;
                if (arr[ny][nx] == 0 && kill_year[ny][nx] < 0) cnt++;
            }
            // 추가할 칸 따로 저장 -> 동시에 발생하기 때문
            for (int k = 0;k < 4;k++) {
                int ny = i + dy[k];
                int nx = j + dx[k];
                if (ny < 0 || nx < 0 || ny >= n || nx >= n) continue;
                if (arr[ny][nx] == 0 && kill_year[ny][nx] < 0) visited[ny][nx] += (arr[i][j] / cnt);
            }
        }
    }

    for (int i = 0;i < n;i++) {
        for (int j = 0;j < n;j++) {
            if (visited[i][j] > 0) {
                arr[i][j] += visited[i][j];
            }
        }
    }
}
int checkKillTreeCnt(int y, int x) {
    int cnt = arr[y][x];
    bool isAble[4] = { true,true,true,true };

    for (int i = 1; i <= K; i++) {
        for (int k = 0;k < 4;k++) {
            if (!isAble[k]) continue; // 퍼질 수 있는 방향인지 확인
            int ny = y + ey[k] * i;
            int nx = x + ex[k] * i;
            if (ny < 0 || nx < 0 || ny >= n || nx >= n) continue;
            if (arr[ny][nx] <= 0) isAble[k] = false;
            if (arr[ny][nx] > 0) cnt += arr[ny][nx];
        }
    }
    cout << y << ", " << x << " : " << cnt <<'\n';
    return cnt;
}
int kill() { // 제초제
    int cnt = 0;
    pair<int, int> killPoint;
    for (int i = 0;i < n;i++) {
        for (int j = 0;j < n;j++) {
            if (arr[i][j] <= 0) continue;
            int killCnt = checkKillTreeCnt(i, j);
            if (cnt < killCnt) {
                cnt = killCnt;
                killPoint = { i,j };
                // cout << cnt << " : " << killPoint.first << ", " << killPoint.second << '\n';
            }
        }
    }

    bool isAble[4] = { true,true,true,true };
    arr[killPoint.first][killPoint.second] = 0;
    kill_year[killPoint.first][killPoint.second] = c;
    for (int i = 1; i <= K; i++) {
        for (int j = 0;j < 4;j++) {
            if (!isAble[j]) continue; // 퍼질 수 있는 방향인지 확인
            int ny = killPoint.first + ey[j] * i;
            int nx = killPoint.second + ex[j] * i;
            if (ny < 0 || nx < 0 || ny >= n || nx >= n) continue;
            if (arr[ny][nx] <= 0) isAble[j] = false;
            if (arr[ny][nx] >= 0)arr[ny][nx] = 0;
            kill_year[ny][nx] = c;
        }
    }
    cout << cnt << " : " << killPoint.first << ", " << killPoint.second << '\n';
    return cnt;
}
void nextYear() {
    for (int i = 0;i < n;i++) {
        for (int j = 0;j < n;j++) {
            if (kill_year[i][j] >= 0) kill_year[i][j]--;
        }
    }
    fill(&visited[0][0], &visited[0][0] + 24 * 24, 0);
}
void showMap() {
    cout << "=============================\n";
    for (int i = 0;i < n;i++) {
        for (int j = 0;j < n;j++) {
            cout << arr[i][j] << ' ';
        }
        cout << '\n';
    }
}
#endif
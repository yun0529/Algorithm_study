#if 01
#include <iostream>
#include <vector>

using namespace std;

int arr[30][30], visited[30][30], cnt[14];
int n;
int dy[] = { -1,0,1,0 };
int dx[] = { 0,1,0,-1 };
int mid, ret;

int nearCnt[14][14];

void dfs(int y, int x, int num) {
    visited[y][x] = 1;
    for (int i = 0; i < 4; i++) {
        int ny = y + dy[i];
        int nx = x + dx[i];

        if (ny < 0 || nx < 0 || ny >= n || nx >= n) continue;
        if (visited[ny][nx] || arr[ny][nx] != num) continue;
        dfs(ny, nx, num);
        cnt[num]++;
    }
    return;
}
void rollMid() {
    int tmp[30];
    for (int i = 0; i < n; i++) { // 세로 항목 임시 배열에 저장 
        tmp[i] = arr[i][mid];
    }
    // 회전
    for (int i = 1; i <= n; i++) {
        arr[i-1][mid] = arr[mid][n - i];
    }
    for (int i = 0; i < n; i++) {
        arr[mid][i] = tmp[i];
    }
}
void rollSq(int y, int x) {
    if (mid / 2 == 0) return;
    for (int i = 0; i < mid / 2; i++) { // 가쪽 -> 안쪽
        // y = y+i;
        // x = x+i;
        int tmp = arr[y + i][x + i];
        // 아래도 y,x로 수정
        for (int j = y + i + 1; j <= y + mid - 1 - i; j++) { // 왼쪽
            arr[j - 1][x + i] = arr[j][x + i];
        }
        for (int j = x + i + 1; j <= x + mid - 1 - i; j++) { // 아래
            arr[y + mid - 1 - i][j - 1] = arr[y + mid - 1 - i][j];
        }
        for (int j = y + mid - 2 - i; j >= y + i; j--) { // 오른쪽
            arr[j + 1][x + mid - 1 - i] = arr[j][x + mid - 1 - i];
        }
        for (int j = x + mid - i - 2; j > x + i; j--) { // 위
            arr[y + i][j + 1] = arr[y + i][j];
        }
        arr[y + i][x + i + 1] = tmp;
    }
}

void checkCnt(int num) {
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[i][j] == num) {
                visited[i][j] = 1;
                for (int d = 0; d < 4; d++) {
                    int ny = i + dy[d];
                    int nx = j + dx[d];

                    if (ny < 0 || nx < 0 || ny >= n || nx >= n || visited[ny][nx] || arr[ny][nx] == num) continue;
                    nearCnt[num][arr[ny][nx]]++;
                }
            }
            
        }
    }
}

int calc() {
    for (int i = 1; i <= 10; i++) {
        if (cnt[i] == 0) continue;
        fill(&visited[0][0], &visited[0][0] + 30 * 30, 0);
        checkCnt(i);
    }
    for (int i = 0; i < 11; i++) {
        for (int j = 0; j < 11; j++) {
            cout << nearCnt[i][j] << ' ';
        }cout << '\n';
    }
    int sum = 0;
    for (int i = 0; i < 10; i++) {
        if (cnt[i] == 0) continue;
        for (int j = 0; j < 10; j++) {
            if (nearCnt[i][j] == 0) continue;
            sum += (cnt[i] + cnt[j]) * (i + 1) * (j+1) * nearCnt[i][j];
        }
    }
    return sum;
}

void printInfo() {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << ' ';
        }cout << '\n';
    }
}

int main() {
    // Please write your code here.
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
    mid = n / 2;

    for (int t = 0; t < 3; t++) { // 3번 반복

        fill(&visited[0][0], &visited[0][0] + 30 * 30, 0);
        fill(cnt, cnt + 14, 0);
        fill(&nearCnt[0][0], &nearCnt[0][0] + 14*14, 0);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (visited[i][j]) continue;
                dfs(i, j, arr[i][j]);
            }
        }
        ret += calc();
        cout << "ret : " << ret << '\n';
        //printInfo();

        rollMid();
        printInfo();
        cout << "------------------------------\n";
        rollSq(0, 0);
        rollSq(0, mid + 1);
        rollSq(mid + 1, 0);
        rollSq(mid + 1, mid + 1);
        printInfo();
        cout << "=================================\n";
    }

    cout << ret;
    return 0;
}
#endif // 01

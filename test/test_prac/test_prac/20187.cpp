#if 01
#include <iostream>
#include <queue>
#include <tuple>
using namespace std;

int k, arr[260][260], n;
char crr[20];

void folding(int y, int x, int c, int width, int height) {
	if (c == (1 << k))
	{
		arr[y][x] = n;
		return;
	}

	if (crr[c] == 'D') {
		int ny = y + height / 2;
		int nx = x;
		folding(ny, nx, c + 1, width, height / 2);
		
		// ´ëÄª ½ÃÅ°±â
		//cout << 'D'<< y << " : " << x << " => " << height << " : " << width << '\n';
		ny = y + height - 1;
		for (int i = y; i < y + height / 2; i++) {
			for (int j = x; j < x + width; j++) {
				if (arr[ny][j] == -1) continue;
				arr[i][j] = (arr[ny][j] + 2) % 4;
			}
			ny--;
		}
	}
	else if (crr[c] == 'U') {
		int ny = y;
		int nx = x;
		folding(ny, nx, c + 1, width, height / 2);
		// ´ëÄª ½ÃÅ°±â
		//cout << 'U' << y << " : " << x << " => " << height << " : " << width << '\n';
		ny = y + height - 1;
		for (int i = y; i < y + height / 2; i++) {
			for (int j = x; j < x + width; j++) {
				if (arr[i][j] == -1) continue;
				arr[ny][j] = (arr[i][j] + 2) % 4;
			}
			ny--;
		}
	}
	else if (crr[c] == 'R') {
		int ny = y;
		int nx = x + width / 2;
		folding(ny, nx, c + 1, width / 2, height);
		// ´ëÄª ½ÃÅ°±â
		//cout << 'R'<< y << " : " << x << " => " << height<<" : " <<width  << '\n';
		for (int i = y; i < y + height; i++) {
			nx = x + width -1;
			for (int j = x; j < x + width / 2; j++) {
				
				if (arr[i][nx] == -1) continue;
				//cout << nx<<", "<< arr[i][nx] << '\n';
				if (arr[i][nx] % 2 == 0) arr[i][j] = arr[i][nx] + 1;
				else arr[i][j] = arr[i][nx] - 1;
				nx--;
			}
		}
	}
	else { // 'L'
		int ny = y;
		int nx = x;
		folding(ny, nx, c + 1, width / 2, height);

		// ´ëÄª ½ÃÅ°±â
		//cout << 'L' << y << " : " << x << " => " << height << " : " << width << '\n';
		for (int i = y; i < y + height; i++) {
			nx = x + width - 1;
			for (int j = x; j < x + width / 2; j++) {
				if (arr[i][j] == -1) continue;
				if (arr[i][j] % 2 == 0) arr[i][nx] = arr[i][j] + 1;
				else arr[i][nx] = arr[i][j] - 1;
				nx--;
			}
		}
		
	}
	//cout << '-';
	return;
}

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> k;
	for (int i = 0; i < 2 * k; i++) {
		cin >> crr[i];
	}
	cin >> n;
	fill(&arr[0][0], &arr[0][0] + 260 * 260, -1);
	int size = 1 << k;

	folding(0, 0, 0, size, size);
	//cout << '1';
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			//if (arr[i][j] == 0) continue;
			cout << arr[i][j] << ' ';
		}
		cout << '\n';
	}

	return 0;
}

#endif
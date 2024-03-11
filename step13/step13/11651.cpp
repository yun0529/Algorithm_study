#include <iostream>
#include <algorithm>
using namespace std;

typedef struct position {
	int x;
	int y;
}Position;

bool compare(Position cur, Position prev)
{
	if (cur.y > prev.y) return false;
	if (cur.y == prev.y && cur.x > prev.x) return false;
	else return true;
}

int main(void) {

	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n;

	cin >> n;
	Position arr[100001];

	for (int i = 0; i < n; i++) {
		cin >> arr[i].x >> arr[i].y;
	}
	sort(arr, arr + n, compare);

	for (int i = 0; i < n; i++) {
		cout << arr[i].x << " " << arr[i].y << "\n";
	}


	return 0;
}
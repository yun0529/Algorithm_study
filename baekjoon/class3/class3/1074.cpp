#if 0
#include <iostream>
#include <math.h>
using namespace std;

int n, r, c, ret;
int arr[24][24];

void go(int y, int x, int num) {
	if (y == r && x == c) {
		cout << ret;
		return;
	}
	else if(x <= c && y <= r && x + num > c && y + num > r){
		go(y, x, num / 2);
		go(y, x + (num / 2), num / 2);
		go(y + (num / 2), x, num / 2);
		go(y + (num / 2), x + (num / 2), num / 2);
	}
	else {
		// ���� �簢���� ũ�⸦ ���� 
		// -> ���������δ� 2/2 -> 1 �� �ɰŶ�
		// +1+1+1 �ϴٰ� ã��������.
		ret += num * num; 
	}
}

int main() {

	cin >> n >> r >> c;
	go(0, 0, pow(2, n));

	return 0;
}
#endif // 0

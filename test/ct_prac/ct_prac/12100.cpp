#if 01
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int arr[4][4];

void mvr() { // �� -> �ٽ�...
	for (int i = 0;i < 4;i++) {
		if (arr[i][3] != 0 && arr[i][2] != 0 && arr[i][3] == arr[i][2]) { // ���� ���� ��
			arr[i][3] = arr[i][3] + arr[i][2];
		}
		else if (arr[i][2] != 0 && arr[i][1] != 0 && arr[i][2] == arr[i][1]) { // 3��°�� ���� ��
			arr[i][2] = arr[i][2] + arr[i][1];
		}
		else if (arr[i][1] != 0 && arr[i][0] != 0 && arr[i][1] == arr[i][0]) { // 2��°�� ���� ��
			arr[i][1] = arr[i][1] + arr[i][0];
		}

		arr[i][2] = 0; arr[i][0] = 0;
		arr[i][2] = arr[i][1];

		arr[i][1] = 0;
	}
}
void mvl() { // ��

}
void mvu() { // ��

}
void mvd() { // ��

}
int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);



	return 0;
}
#endif // 01

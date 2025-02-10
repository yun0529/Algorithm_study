#if 01
#include <iostream>
using namespace std;

int arr[9], n;
int asc[9], desc[9];
int flag = 3;

int main() {

	for (int i = 1; i <= 8; i++) {
		cin >> arr[i];
		asc[i] = i;
		desc[i] = 8 - i + 1;
	}

	for (int i = 1; i <= 8; i++) {
		if (asc[i] == arr[i]) {
			flag = 1;
		}
		else {
			flag = 3;
			break;
		}
	}
	if (flag == 3) {
		for (int i = 1; i <= 8; i++) {
			if (desc[i] == arr[i]) {
				flag = 2;
			}
			else {
				flag = 3;
				break;
			}
		}
	}
	if (flag == 1) {
		cout << "ascending";
	}
	else if (flag == 2) {
		cout << "descending";
	}
	else {
		cout << "mixed";
	}
	
	return 0;
}

#endif // 0

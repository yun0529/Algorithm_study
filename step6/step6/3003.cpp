#include <iostream>
using namespace std;

int main(void) {

	int arr[6];

	for (int i = 0; i < 6; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < 6; i++) {
		switch (i) {
		case 0:
			cout << 1 - arr[i]<< " ";
			break;
		case 1:
			cout << 1 - arr[i] << " ";
			break;
		case 2:
			cout << 2 - arr[i] << " ";
			break;
		case 3:
			cout << 2 - arr[i] << " ";
			break;
		case 4:
			cout << 2 - arr[i] << " ";
			break;
		case 5:
			cout << 8 - arr[i] << " ";
			break;
		}

	}

	return 0;
}
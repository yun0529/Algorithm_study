#include <iostream>
using namespace std;

int main(void) {

	int n;
	int point = 2;
	cin >> n;

	for (int i = 0; i < n; i++) {
		point = point + (point - 1);
	}
	cout << point*point;

	return 0;
}
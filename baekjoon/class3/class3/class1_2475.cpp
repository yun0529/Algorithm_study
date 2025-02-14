#if 01
#include <iostream> 
#include <math.h>
using namespace std;
int main() {
	int n, sum = 0;
	for (int i = 0; i < 5; i++) {
		cin >> n;
		sum += pow(n, 2);
	}
	cout << sum % 10;
	return 0;
}
#endif
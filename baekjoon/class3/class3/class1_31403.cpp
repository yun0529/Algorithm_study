#include <iostream>
#include <math.h>
#include <string>
using namespace std;

#if 01

int a, b, c;
int main() {
	cin >> a >> b >> c;
	cout << a + b - c<<'\n';
	string ab = to_string(a) + to_string(b);
	cout << stoi(ab) - c;
}

#endif
#if 0
#include <iostream>
using namespace std;

int main() {

	string str = "Hello,World,C++";
	int cur = 0;
	string split = ",";

	int pos;
	while ((pos = str.find(split, cur)) != string::npos) {
		int len = pos - cur;
		string ret = str.substr(cur, len);
		cout << ret << ' ';
		cur = pos + 1;
	}
	string ret = str.substr(cur);
	cout << ret;
	return 0;
}
#endif // 0

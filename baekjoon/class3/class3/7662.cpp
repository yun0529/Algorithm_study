#if 0
#include <iostream>
#include <queue>
#include <map>
using namespace std;

int tc, k, n, mn,mx;
char c; // I : 삽입, D : 삭제 -> 1 : 최댓값 삭제, -1 : 최솟값 삭제
priority_queue<int> mxq;
priority_queue<int, vector<int>,greater<int>> mnq;
map<int, int> mp;

void del(int n) {
	if (n == 1) {
		if (mxq.empty()) return;
		mp[mxq.top()]--;
		mxq.pop();
	}
	else {
		if (mnq.empty()) return;
		mp[mnq.top()]--;
		mnq.pop();
	}
	return;
}

void inp(int n) {
	mxq.push(n);
	mnq.push(n);
	mp[n]++;
	return;
}
void mpClear() {
	while (mxq.size() && mp[mxq.top()] == 0) {
		mxq.pop(); // top이 삭제되된 숫자라면 제거 
	}
	while (mnq.size() && mp[mnq.top()] == 0) {
		mnq.pop(); // top이 삭제되된 숫자라면 제거 
	}
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);  cout.tie(NULL);
	cin >> tc;
	for (int i = 0; i < tc; ++i) {
		cin >> k;
		mnq = {};
		mxq = {};
		mp.clear();
		for (int j = 0; j < k; ++j) {
			cin >> c >> n;
			if (c == 'I') inp(n);
			else {
				del(n);
				mpClear();
			}
		}
		mpClear();
		if (mxq.empty() && mnq.empty()) cout << "EMPTY" << '\n';
		else {
			if (mxq.empty()) {
				mx = mnq.top();
				mn = mnq.top();
			}
			else if(mnq.empty()){
				mx = mxq.top();
				mn = mxq.top();
			}
			else {
				mx = mxq.top();
				mn = mnq.top();
			}
			cout << mx << ' ' << mn << '\n';
		}
	}
	
	return 0;
}
#endif // 01

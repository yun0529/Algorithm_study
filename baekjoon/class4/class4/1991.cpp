#if 0
#include <iostream>
#include <vector>
using namespace std;

int n;
char x, a, b;
vector<int> v[30];

void preorder(int idx) {
	if ((char)(idx + 'A') == '.') return;
	cout << (char)(idx + 'A');
	preorder(v[idx][0]);
	preorder(v[idx][1]);
}
void inorder(int idx) {
	if ((char)(idx + 'A') == '.') return;
	inorder(v[idx][0]);
	cout << (char)(idx + 'A');
	inorder(v[idx][1]);
}
void postorder(int idx) {
	if ((char)(idx + 'A') == '.') return;
	postorder(v[idx][0]);
	postorder(v[idx][1]);
	cout << (char)(idx + 'A');
}

int main() {

	cin >> n;
	int root;
	for (int i = 0; i < n; ++i) {
		cin >> x;
		if (i == 0) root = x - 'A';
		cin >> a >> b;
		v[x - 'A'].push_back(a - 'A');
		v[x - 'A'].push_back(b - 'A');
	}
	preorder(root); cout << '\n';
	inorder(root); cout << '\n';
	postorder(root); cout << '\n';

	return 0;
}
#endif
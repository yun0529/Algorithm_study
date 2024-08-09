//#include <bits/stdc++.h> 
//using namespace std;
//
//int n, cnt = 0, atk = 9, life, attackCount = 0, ans = 987654321;
//int arr[4];
//int ret = 987654321;
//bool flag = false;
//
//int graph[64][64][64];
//
//int a, b, c;
//
//bool cmp(int a, int b) {
//	return a > b;
//}
//
//void attack(int one, int two, int three, int count) {
//	//cout << one << two << three << count<<"\n\n";
//	if (one <= 0 && two <= 0 && three <= 0) {
//		if (ret > count) {
//			ret = count;
//			return;
//		}
//	}
//	//if (count >= ret) return;
//	if(one <0) one =0; // -> 값이 범위를 벗어나서 오류가 나는듯,,?
//    if(two<0 ) two=0;
//    if(three<0) three=0;
//	
//	// 이미 시도했던 경우에 도달했을 때 횟수가 더 많다면 종료
//	if (graph[one][two][three] <= count && graph[one][two][three] != 0)return;
//
//
//	graph[one][two][three] = count;
//	if (n == 1) {
//		attack(one - 9, two, three, count + 1);
//	}
//	else if (n == 2) {
//		attack(one - 9, two - 3, three, count + 1);
//		attack(one - 3, two - 9, three, count + 1);
//	}
//	else {
//		attack(one - 9, two - 3, three - 1, count + 1);
//		attack(one - 9, two - 1, three - 3, count + 1);
//		attack(one - 3, two - 9, three - 1, count + 1);
//		attack(one - 3, two - 1, three - 9, count + 1);
//		attack(one - 1, two - 3, three - 9, count + 1);
//		attack(one - 1, two - 9, three - 3, count + 1);
//	}
//	
//}
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(0); cout.tie(0);
//	
//	cin >> n;
//
//	for (int i = 0; i < n; i++) {
//		cin >> arr[i];
//	}
//	attack(arr[0], arr[1], arr[2], 0);
//
//	cout << ret;
//	//while (true) {
//	//	sort(arr, arr + n, cmp);
//	//	for (int i = 0; i < n;i++) {
//	//		cout << arr[i] << " ";
//	//	}
//	//	cout << '\n';
//
//	//	life = 0;
//	//	atk = 9;
//	//			
//	//	for (int i = 0; i < n;i++) {
//	//		arr[i] -= atk;
//	//		atk = atk / 3;
//	//		if (arr[i] <= 0) life++;
//	//		cout << arr[i] << " ";
//	//		if (life == n)flag = true;
//	//	}
//	//	cout << '\n';
//	//	ret++;
//	//	if (flag) break;
//	//}
//	
//	//sort(arr, arr + n);
//	//do {
//	//	vector<int> vec;
//	//	flag = false;
//	//	attackCount = 0;
//	//	for (int i = 0; i < n; i++) {
//	//		vec.push_back(arr[i]);
//	//		cout << arr[i] << " ";
//	//	}
//	//	//cnt++;
//	//	cout << '\n';
//
//	//	while (true) {
//	//		life = 0;
//	//		atk = 9;
//	//		
//	//		for (int i = 0; i < n;i++) {
//	//			vec[i] -= atk;
//	//			atk = atk / 3;
//	//			if (vec[i] <= 0) life++;
//	//			cout << vec[i] << " ";
//	//		}
//	//		attackCount++;
//	//		if (life == n)flag = true;
//	//		cout << '\n';
//	//		if (flag) break;
//	//	}
//	//	cout << attackCount<<'\n';
//	//	ret = min(ret, attackCount);
//	//	
//	//	cout << '\n';
//	//} while (next_permutation(arr, arr + n));
//
//	//cout << ret;
//
//	return 0;
//}
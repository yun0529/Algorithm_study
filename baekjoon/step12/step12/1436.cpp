//#include <iostream>
//#include <string>
//using namespace std;
//
//int main(void) {
//
//	int n, serise = 0;
//	cin >> n;
//
//	int a = 666;
//	string str;
//	while (n > 0) {
//		str = to_string(a);
//		if (str.find("666") != -1) {//666�� ���ڿ��� ���ԵǸ�
//			n--;
//		}
//		a++;
//	}
//	
//	cout << str;
//	
//	return 0;
//}

//int main(void) {
//
//	string str;
//	cin >> str;
//
//	int arr[26];
//	fill_n(arr, 26, -1);
//	for (int i = 0; i < str.length(); i++) {
//		if (arr[str[i] - 97] == -1) {
//			arr[str[i] - 97] = i;
//		}
//	}
//	for (int i = 0; i < 26; i++) {
//		cout << arr[i] << " ";
//	}
//	return 0;
//}
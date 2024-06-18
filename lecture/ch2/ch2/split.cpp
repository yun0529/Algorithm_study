////#include <bits/stdc++.h>
//#include <iostream>
//#include <vector>
//using namespace std;
//
//vector<string> splits(string input, string delimiter) {
//	vector<string> ret;
//	long long pos = 0;
//	string token = "";
//
//	while ((pos = input.find(delimiter)) != string::npos) { // string::npos �� ���ڿ��� �������� ���� �� ��ȯ��.
//		token = input.substr(0, pos);
//		ret.push_back(token);
//		input.erase(0, pos + delimiter.length());
//	}
//	ret.push_back(input);
//	return ret;
//}
//
//vector<string> fast_splits(const string &input, string delimiter) {
//	vector<string> result;
//	auto start = 0;
//	auto end = input.find(delimiter);
//
//	while (end != string::npos) { // string::npos �� ���ڿ��� �������� ���� �� ��ȯ��.
//		result.push_back(input.substr(start, end - start));
//		start = end + delimiter.size();
//		end = input.find(delimiter, start);
//	}
//	result.push_back(input.substr(start));
//	return result;
//}
//
//int main(void) { // c++ ������ STL ���� split ���� ����
//	
//	string s = "abcffabcdffabcde";
//	vector<string> a = fast_splits(s, "ff");
//	for (string b : a) {
//		cout << b << "\n";
//	}
//
//	return 0;
//}
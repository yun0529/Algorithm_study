//#include <iostream>
//#include <algorithm>
//#include <string>
//using namespace std;
//
//typedef struct person {
//	int age;
//	string name;
//}Person;
//
//bool cmp(Person cur, Person prev) {
//	return cur.age < prev.age;
//		//if (cur.age == prev.age && cur.y > prev.y) return false;
//}
//
//Person p[100001];
//
//int main(void) {
//	cin.tie(NULL);
//	ios::sync_with_stdio(false);
//
//	int n;
//	
//	cin >> n;
//
//	for (int i = 0; i < n; i++) {
//		cin >> p[i].age >> p[i].name;
//	}
//
//	stable_sort(p, p + n, cmp);
//	for (int i = 0; i < n; i++) {
//		cout << p[i].age << " " << p[i].name << "\n";
//	}
//
//	return 0;
//}
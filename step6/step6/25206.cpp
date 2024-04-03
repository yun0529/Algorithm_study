//#include <iostream>
//#include <string>
//using namespace std;
//
//int main(void) {
//
//	string name, score;
//	double grade, total = 0.0;
//	double num = 0.0;
//	for (int i = 0; i < 20; i++) {
//		cin >> name >> grade >> score;
//		if (score.compare("P") == 0) {
//			continue;
//		}
//		else {
//			if (score.compare("A+") == 0) {
//				total = total + (grade * 4.5);
//				num += grade;
//			}
//			else if (score.compare("A0") == 0) {
//				total = total + (grade * 4.0);
//				num += grade;
//			}
//			else if (score.compare("B+") == 0) {
//				total = total + (grade * 3.5);
//				num += grade;
//			}
//			else if (score.compare("B0") == 0) {
//				total = total + (grade * 3.0);
//				num += grade;
//			}
//			else if (score.compare("C+") == 0) {
//				total = total + (grade * 2.5);
//				num += grade;
//			}
//			else if (score.compare("C0") == 0){
//				total = total + (grade * 2.0);
//				num += grade;
//		}
//			else if (score.compare("D+") == 0){
//				total = total + (grade * 1.5);
//				num += grade;
//		}
//			else if (score.compare("D0") == 0){
//				total = total + (grade * 1.0);
//				num += grade;
//		}
//			else if (score.compare("F") == 0){
//				total = total + (grade * 0.0);
//				num += grade;
//		}
//		}
//	}
//	if (total == 0.0) {
//		cout << total;
//	}
//	else {
//		cout << total / num;
//	}
//	
//
//	return 0;
//}
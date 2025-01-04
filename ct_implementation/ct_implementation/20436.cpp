//#include <iostream>
//using namespace std;
//
//string kb[3] = { "qwertyuiop", "asdfghjkl" ,"zxcvbnm" };
//string str;
//char l, r;
//
//int lx, ly, rx, ry, cnt;
//
//int main() {
//
//	cin >> l >> r >> str;
//
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < kb[i].length(); j++) {
//			if (kb[i][j] == l) {
//				ly = i; lx = j;
//			}
//			else if (kb[i][j] == r) {
//				ry = i; rx = j;
//			}
//		}
//	}
//
//	for (int i = 0; i < str.length(); i++) {
//		int xpos = 0, ypos = 0;
//		for (int j = 0; j < 3; j++) { // 키보드에서 해당 자판 위치 찾기
//			xpos = kb[j].find(str[i]);
//			if (xpos == string::npos) continue;
//			else {
//				ypos = j;
//				break;
//			}
//		}
//		if (ypos == 0 && xpos >= 5) { // 오
//			cnt += abs(xpos - rx) + abs(ypos - ry);
//			cnt++;
//			rx = xpos;
//			ry = ypos;
//		}
//		else if (ypos == 1 && xpos >= 5) {
//			cnt += abs(xpos - rx) + abs(ypos - ry);
//			cnt++;
//			rx = xpos;
//			ry = ypos;
//		}
//		else if (ypos == 2 && xpos >= 4) {
//			cnt += abs(xpos - rx) + abs(ypos - ry);
//			cnt++;
//			rx = xpos;
//			ry = ypos;
//		}
//		else {
//			cnt += abs(xpos - lx) + abs(ypos - ly);
//			cnt++;
//			lx = xpos;
//			ly = ypos;
//		}
//	}
//	cout << cnt;
//	return 0;
//}
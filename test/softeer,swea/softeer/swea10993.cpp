//#include<iostream>
//#include<bits/stdc++.h>
//
//using namespace std;
//
//
//
//int main(int argc, char** argv)
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL); cout.tie(NULL);
//	int test_case;
//	int T;
//	
//	cin >> T;
//	
//	for (test_case = 1; test_case <= T; ++test_case)
//	{
//		int n;
//		double x[1004] = { 0, }, y[1004] = { 0, }, s[1004] = { 0, };
//		string atk[1004];
//
//		cin >> n;
//		for (int i = 0; i < n; i++) {
//			cin >> x[i] >> y[i] >> s[i];
//		}
//		for (int i = 0; i < n; i++) {
//			double max_atk = s[i]; // �ڽ� ������� �ʱⰪ���� ����
//			int max_atk_cnt = 0;
//			int max_atk_num = i;
//			cout << "\n=-=============" << i+1 << '\n';
//			for (int j = 0; j < n; j++) {
//				if (j != i) { // �ڽŰ� �� X
//					int dx = x[j] - x[i]; int dy = y[j] - y[i];
//					double j_atk = s[j] / (pow(dx,2) + pow(dy,2));
//					
//					if(max_atk < j_atk){ // ����� ������� ũ�ٸ�
//						max_atk = j_atk;
//						max_atk_num = j;
//					}else if (j_atk != s[i] && max_atk == j_atk) { // �� ���ð� ���� ������� ū ���� �ƴϰ� ���� ���� �ִ� ���
//						max_atk_num = n + 1;
//					}
//					cout << s[i] << " : " << j_atk << '\n';
//				}
//			}
//			if (max_atk_num == i) { // �� ���� ������ ����
//				atk[i] = "K";
//			}
//			else if (max_atk_num == n+1) { // ��ȭ��
//				atk[i] = "D";
//			}
//			else { // �ٸ� ���ÿ� �׺�
//				atk[i] = to_string(max_atk_num);
//			}
//		}
//		for (int k = 0; k < n; k++) { // ���� ����� ��ġ�� �ٸ� ���õ� �ٲ����.
//			if (atk[k] == "K" || atk[k] == "D") continue;
//			while (true) {
//				if (atk[stoi(atk[k])] == "K" || atk[stoi(atk[k])] == "D") break;
//				atk[k] = atk[stoi(atk[k])];
//			}
//		}
//
//		cout << '#'<<test_case << ' ';
//		for (int i = 0; i < n; i++) {
//			if (atk[i] == "K" || atk[i] == "D") cout << atk[i]<<' ';
//			else cout << stoi(atk[i])+1 << ' ';
//		}
//		cout << '\n';
//	}
//	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
//}
//#include <iostream>
//#include <vector>
//#include <math.h>
//using namespace std;
//
//long long n, maxhp, curhp, atk, monhp, monatk, sum, mx, ret;
//
//vector<long long> v[123460];
//
///*
//����� ���ݷ� HATK��ŭ ������ ������� ����ϴ�.
//������ ������� 0 �����̸� ������ ����ǰ� ���� ���� ������ �̵��մϴ�.
//������ ���ݷ¸�ŭ ����� ����� HCurHP�� ����ϴ�.
//����� ������� 0 �����̸� ������ ����ǰ� ���� ����մϴ�.
//�ٽ� 1���� �����մϴ�.
//*/
//bool check(long long mid) {
//	//out << "\nmid : " << mid << "=========================" << "\n";
//	//if (mid < mx) return false;
//	maxhp = mid;
//	curhp = maxhp;
//	long long tmp_atk = atk;
//	for (int i = 0; i < n; i++) {
//		if (v[i][0] == 1) { // ���͹�
//			curhp -= ceil(((double)v[i][2] / tmp_atk) - 1) * v[i][1];
//			//cout << "curhp : " << curhp << '\n';
//		}
//		else { // ������
//			if (v[i][2] + curhp >= maxhp) curhp = maxhp;
//			else curhp += v[i][2];
//			tmp_atk += v[i][1];
//			//cout << "curhp : " << curhp << " atk : " << tmp_atk << '\n';
//		}
//		if (curhp <= 0) return false;
//	}
//	return curhp > 0;
//}
//
//int main() {
//
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL); cout.tie(NULL);
//
//	cin >> n >> atk;
//	long long t,a,h, tmp_atk = atk;
//	for (int i = 0; i < n; i++) {
//		cin >> t >> a >> h;
//		if (t == 1) {
//			//sum += ceil(((double)h / tmp_atk) - 1) * a;
//			mx += (long long)ceil(((double)h / tmp_atk) - 1) * a;
//		}
//		else {
//			//sum -= h;
//			tmp_atk += a;
//		}
//		v[i].push_back(t);
//		v[i].push_back(a);
//		v[i].push_back(h);
//		
//	}
//	sum += 1; // �� 1 ���ƾ���.
//	long long lo = 0, hi = mx + 1;
//	//cout << "mx : " << mx << '\n';
//	while (lo <= hi) {
//		long long mid = (lo + hi) / 2;
//		if (check(mid)) {
//			hi = mid - 1;
//			ret = mid;
//		}
//		else {
//			lo = mid + 1;
//		}
//	}
//	cout << ret;
//	return 0;
//}
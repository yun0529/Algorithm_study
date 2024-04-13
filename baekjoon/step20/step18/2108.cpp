//#include <iostream>
//#include <cmath>
//#include <algorithm>
//#include <map>
//using namespace std;
//
//int main(void) {
//
//	cin.tie(NULL);
//	ios_base::sync_with_stdio(false);
//
//	int n,a,sum = 0;
//	
//	int max = 0, max_idx = 0;
//	cin >> n;
//	int *arr = new int[n];
//
//	int max_num[8001] = { 0, };
//
//	for (int i = 0; i < n; i++) {
//		cin >> arr[i];
//		sum += arr[i];
//		max_num[arr[i] + 4000]++;
//		if (max < max_num[arr[i] + 4000]) {
//			max = max_num[arr[i] + 4000];
//		}
//	}
//	sort(arr, arr + n);
//
//	bool cnt = false;
//	for (int i = 0; i < 8001; i++) {
//		if (max == max_num[i]) {
//			if (cnt) {
//				max_idx = i - 4000;
//				//max = max_num[]
//				break;
//			}
//			else {
//				max_idx = i - 4000;
//				cnt = true;
//			}
//		}
//	}
//	float mean;
//	if (round((float)sum / n) == -0) {
//		mean = 0;
//	}
//	else {
//		mean = round((float)sum / n);
//	}
//	cout << mean << "\n" << arr[n/2]<<"\n"<<max_idx<<"\n"<<arr[n - 1] - arr[0];
//
//	return 0;
//}
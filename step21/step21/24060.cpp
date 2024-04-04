//#include <iostream>
//using namespace std;
//
//int *A;
//int* tmp;
//int cnt = 0, result, k;
//
//// A[p..q]와 A[q + 1..r]을 병합하여 A[p..r]을 오름차순 정렬된 상태로 만든다.
//// A[p..q]와 A[q + 1..r]은 이미 오름차순으로 정렬되어 있다.
//void merge(int *A, int p, int q, int r) {
//    int i = p; int j = q + 1; int t = 1;
//    while (i <= q and j <= r) {
//        if (A[i] <= A[j]) {
//            tmp[t++] = A[i++]; // tmp[t] < -A[i]; t++; i++;
//        }
//        else {
//            tmp[t++] = A[j++]; // tmp[t] < -A[j]; t++; j++;
//        }
//    }
//    while (i <= q)  // 왼쪽 배열 부분이 남은 경우
//        tmp[t++] = A[i++];
//    while (j <= r)  // 오른쪽 배열 부분이 남은 경우
//        tmp[t++] = A[j++];
//
//    i = p; t = 1;
//
//    while (i <= r) {  // 결과를 A[p..r]에 저장
//        A[i++] = tmp[t++];
//        cnt++;
//        if (cnt == k) {
//            result = A[i - 1];
//            break;
//        }
//    }
//}
//
//void merge_sort(int* A, int p, int r) {
//    // A[p..r]을 오름차순 정렬한다.
//    int q;
//    if (p < r) {
//        q = (p + r) / 2;       // q는 p, r의 중간 지점
//        merge_sort(A, p, q);      // 전반부 정렬
//        merge_sort(A, q + 1, r);  // 후반부 정렬
//        merge(A, p, q, r);        // 병합
//    }
//}
//
//int main(void) {
//
//    int n;
//    cin >> n >> k;
//
//    A = new int[n+1];
//    tmp = new int[n+1];
//
//    for (int i = 0; i < n; i++) {
//        cin >> A[i];
//    }
//    merge_sort(A, 0, n-1);
//    if (cnt < k) {
//        cout << -1;
//    }
//    else {
//        cout << result;
//    }
//    
//    delete[]A;
//    delete[]tmp;
//
//	return 0;
//}
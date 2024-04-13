//#include <iostream>
//using namespace std;
//
//int *A;
//int* tmp;
//int cnt = 0, result, k;
//
//// A[p..q]�� A[q + 1..r]�� �����Ͽ� A[p..r]�� �������� ���ĵ� ���·� �����.
//// A[p..q]�� A[q + 1..r]�� �̹� ������������ ���ĵǾ� �ִ�.
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
//    while (i <= q)  // ���� �迭 �κ��� ���� ���
//        tmp[t++] = A[i++];
//    while (j <= r)  // ������ �迭 �κ��� ���� ���
//        tmp[t++] = A[j++];
//
//    i = p; t = 1;
//
//    while (i <= r) {  // ����� A[p..r]�� ����
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
//    // A[p..r]�� �������� �����Ѵ�.
//    int q;
//    if (p < r) {
//        q = (p + r) / 2;       // q�� p, r�� �߰� ����
//        merge_sort(A, p, q);      // ���ݺ� ����
//        merge_sort(A, q + 1, r);  // �Ĺݺ� ����
//        merge(A, p, q, r);        // ����
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
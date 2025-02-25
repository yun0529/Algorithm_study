#if 0
#include<iostream>

using namespace std;

int gcd(int a, int b)
{
    int c = a % b;
    while (c != 0) {
        a = b;
        b = c;
        c = a % b;
    }
    return b;
}


int main() {
    int p, q;
    cin >> p >> q;
    int g = gcd(p, q);
    cout << g << '\n';
    cout << (p * q) / g << '\n';  //최소공배수는 최대공약수 x 나머지가 0이될때까지 나눈 두 수
}
#endif
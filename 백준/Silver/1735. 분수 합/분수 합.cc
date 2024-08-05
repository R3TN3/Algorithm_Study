#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while (b > 0) {
        int tmp  = b;
        b = a % b;
        a = tmp;
    }

    return a;
}

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int a, b, num;
    int a1, b1, a2, b2;
    cin >> a1 >> b1 >> a2 >> b2;

    a = a1 * b2 + a2 * b1;
    b = b1 * b2;

    num = gcd(a, b);
    a = a / num;
    b = b / num;

    cout << a << " " << b << "\n";
    
    return 0;
}
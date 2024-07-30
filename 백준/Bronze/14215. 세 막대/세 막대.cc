#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int a, b, c;
    cin >> a >> b >> c;

    if (a > b && a > c) {
        if (a >= b + c)
            a = b + c - 1;
    }
    else if (b > a && b > c) {
        if (b >= c + a)
            b = c + a - 1;
    }
    else {
        if (c >= a + b)
            c = a + b - 1;
    }

    cout << a + b + c << "\n";
    
    return 0;
}
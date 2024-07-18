#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int n;
    int a = 1, b = 2;
    cin >> n;

    for (int i = 3; i <= n; i++) {
        int tmp = b;
        b = (a+b) % 10007;
        a = tmp;
    }

    if (n == 1)
        cout << a << "\n";
    else
        cout << b << "\n";
    
    return 0;
}
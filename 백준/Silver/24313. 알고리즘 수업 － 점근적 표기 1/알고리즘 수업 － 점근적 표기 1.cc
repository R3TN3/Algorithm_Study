#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int a1, a0, c, n;
    cin >> a1 >> a0 >> c >> n;

    int f = a1 * n + a0;
    int g = c * n;

    if (f <= g && a1 <= c)
        cout << 1 << "\n";
    else
        cout << 0 << "\n";

    return 0;
}
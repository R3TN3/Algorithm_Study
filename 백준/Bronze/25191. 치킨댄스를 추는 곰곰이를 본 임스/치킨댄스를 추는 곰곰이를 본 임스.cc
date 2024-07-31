#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int n, a, b;
    cin >> n >> a >> b;
    int cnt = a / 2 + b;

    if (cnt < n)
        cout << cnt << "\n";
    else
        cout << n << "\n";
    return 0;
}
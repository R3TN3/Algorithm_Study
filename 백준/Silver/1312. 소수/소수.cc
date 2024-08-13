#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int a, b, n;
    int res;
    cin >> a >> b >> n;

    for (int i = 0; i < n; i++) {
        a = (a%b) * 10;
        res = a / b;
    }

    cout << res << "\n";
    
    return 0;
}
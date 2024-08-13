#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    long long s, n = 1, cnt = 0;
    cin >> s;

    while (n <= s) {
        s -= n;
        n++;
        cnt++;
    }

    cout << cnt << "\n";
    
    return 0;
}
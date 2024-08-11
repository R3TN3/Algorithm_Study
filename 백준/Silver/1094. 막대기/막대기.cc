#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int x;
    int len = 64, cnt = 0;
    cin >> x;

    while (x) {
        if (len > x)
            len /= 2;
        else {
            x -= len;
            cnt++;
        }
    }

    cout << cnt << "\n";
    
    return 0;
}
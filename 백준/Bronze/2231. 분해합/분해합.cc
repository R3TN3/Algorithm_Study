#include <iostream>
using namespace std;

int main() {
    int n;
    bool check = false;
    cin >> n;

    for (int i = n-54; i < n; i++) {
        int tmp = i, num = 0;
        while (tmp > 0) {
            num += tmp % 10;
            tmp /= 10;
        }

        if (num + i == n) {
            cout << i << "\n";
            check = true;
            break;
        }
    }

    if (!check)
        cout << 0 << "\n";
    
    return 0;
}
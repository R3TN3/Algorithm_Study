#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n;
    cin >> n;

    cout << string(n, '*') << string(2*n - 3, ' ') << string(n, '*') << '\n';
    
    for (int i = 1; i <= n-2; i++) {
        cout << string(i, ' ') << '*' << string(n-2, ' ') << '*'
             << string(2*n - 3 - 2*i, ' ')
             << '*' << string(n-2, ' ') << '*' << "\n";
    }

    cout << string(n-1, ' ') << '*' << string(n-2, ' ') << '*' << string(n-2, ' ') << '*' << "\n";

    for (int i = n-2; i >= 1; i--) {
        cout << string(i, ' ') << '*' << string(n-2, ' ') << '*'
             << string(2*n - 3 - 2*i, ' ')
             << '*' << string(n-2, ' ') << '*' << "\n";
    }

    cout << string(n, '*') << string(2*n - 3, ' ') << string(n, '*') << '\n';
    
    return 0;
}
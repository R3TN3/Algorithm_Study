#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, side = 2;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        int tmp = 1;
        
        for (int j = 2; j <= i; j++)
            tmp *= 2;

        side += tmp;
    }

    cout << side * side << "\n";
    
    return 0;
}
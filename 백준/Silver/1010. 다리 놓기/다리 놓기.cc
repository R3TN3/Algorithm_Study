#include <iostream>
using namespace std;

int main() {
    int t, n, m;

    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> n >> m;
        long long result = 1, tmp = 1;

        for (int j = m; j > m-n; j--) {
            result *= j;
            result /= tmp;
            tmp++;
        }

        cout << result << endl;
    }
    
    return 0;
}
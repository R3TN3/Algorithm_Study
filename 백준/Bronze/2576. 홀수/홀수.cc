#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int sum = 0, min = 101;

    for (int i = 0; i < 7; i++) {
        int num;
        cin >> num;

        if (num % 2 != 0) {
            sum += num;

            if (num < min)
                min = num;
        }
    }

    if (sum == 0)
        cout << -1 << "\n";
    else {
        cout << sum << "\n";
        cout << min << "\n";
    }
    
    return 0;
}
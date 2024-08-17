#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        unsigned int n;
        bool prime_num;
        cin >> n;

        if (n <= 1) {
            cout << 2 << "\n";
            continue;
        }
        while (true) {
            prime_num = true;
            
            for (int j = 2; j*j <= n; j++) {
                if (n % j == 0) {
                    n++;
                    prime_num = false;
                    break;
                }
            }
            if (prime_num) {
                cout << n << "\n";
                break;
            }              
        }
    }
    
    return 0;
}
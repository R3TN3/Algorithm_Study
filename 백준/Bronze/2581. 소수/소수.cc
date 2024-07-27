#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int prime_min = m, prime_sum = 0;

    for (int i = n; i <= m; i++) {
        bool check_prime = true;
        if (i == 1)
            continue;

        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                check_prime = false;
                break;
            }
        }

        if (check_prime) {
            if (i < prime_min)
                prime_min = i;
            prime_sum += i;
        }
    }

    if (prime_sum == 0)
        cout << -1 << "\n";
    else {
        cout << prime_sum << "\n";
        cout << prime_min << "\n";
    }
    
    return 0;
}
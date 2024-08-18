#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    vector<bool> arr(123456*2+1, true);
    arr[0] = false, arr[1] = false;

    for (int i = 2; i <= 123456*2; i++) {
        for (int j = 2; j <= sqrt(i); j++) {
            if (i % j == 0) {
                arr[i] = false;
                break;
            }
        }
    }
        
    while (1) {
        int n;
        cin >> n;
        
        if (n == 0) break;

        int primes = 0;
        for (int i = n+1; i <= 2*n; i++)
            if (arr[i]) primes++;

        cout << primes << "\n";
    }
    
    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int n;

    while (1) {
        vector<int> divisor;
        int sum_divisor = 0;
        cin >> n;

        if (n == -1)
            break;

        for (int i = 1; i < n; i++) {
            if (n % i == 0) {
                divisor.push_back(i);
                sum_divisor += i;
            }
        }

        if (n == sum_divisor) {
            cout << n << " = " << 1;
            for (int i = 1; i < divisor.size(); i++)
                cout << " + " << divisor[i];
            cout << "\n";
        }
        else
            cout << n << " is NOT perfect." << "\n";
    }
    
    return 0;
}
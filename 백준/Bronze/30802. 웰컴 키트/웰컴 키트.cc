#include <iostream>
using namespace std;

int main() {
    int n, t, p;
    int size_list[6];
    int size_sum = 0;
    cin >> n;

    for (int i = 0; i < 6; i++)
        cin >> size_list[i];

    cin >> t >> p;

    for (int i = 0; i < 6; i++) {
        if (size_list[i] == 0)
            continue;
        else {
            if (size_list[i] % t == 0)
                size_sum += size_list[i] / t;
            else
                size_sum += size_list[i] / t + 1;
        }    
    }

    cout << size_sum << "\n";
    cout << n / p << " " << n % p << "\n";
    return 0;
}
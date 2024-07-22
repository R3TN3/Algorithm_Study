#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    string n;
    int b;
    int sum = 0;
    cin >> n >> b;

    for (int i = 0; i < n.size(); i++) {
        char digit = n[n.size() - 1 - i];
        int value;

        if (isdigit(digit))
            value = digit - '0';
        else
            value = digit - 'A' + 10;

        sum += value * pow(b, i);
    }

    cout << sum << "\n";
    
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int n, b;
    string num = "";
    cin >> n >> b;

    while (n) {
        if (n % b > 9)
            num += char(n % b + 55);
        else
            num += to_string(n % b);
        n /= b;
    }

    for (int i = num.size() - 1; i >= 0; i--)
        cout << num[i];
    cout << "\n";
    
    return 0;
}
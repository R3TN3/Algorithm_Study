#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int n;
    long long nums = 0, r = 1;
    string s;
    cin >> n >> s;

    for (int i = 0; i < n; i++) {
        nums = nums + (int(s[i]) - 96) * r % 1234567891;
        r = r * 31 % 1234567891;
    }

    cout << nums % 1234567891 << "\n";
    
    return 0;
}
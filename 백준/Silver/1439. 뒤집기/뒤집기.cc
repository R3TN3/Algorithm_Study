#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int cnt_zero = 0, cnt_one = 0;
    string s;
    cin >> s;

    for (int i = 0; i < s.size()-1; i++) {
        if (s[i] == '0' && s[i+1] == '1')
            cnt_zero++;
        if (s[i] == '1' && s[i+1] == '0')
            cnt_one++;
    }

    cout << max(cnt_zero, cnt_one) << "\n";
    
    return 0;
}
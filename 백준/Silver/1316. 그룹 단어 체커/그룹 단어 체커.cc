#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int n;
    int cnt = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string s;
        bool check = true;
        cin >> s;

        for (int j = 0; j < s.length()-1; j++) {
            for (int k = j+1; k < s.length(); k++) {
                if (s[j] != s[k]) {
                    for (int l = k+1; l < s.length(); l++) {
                        if (s[j] == s[l])
                            check = false;
                    }
                }
            }
        }

        if (check)
            cnt++;
    }

    cout << cnt << "\n";
    
    return 0;
}
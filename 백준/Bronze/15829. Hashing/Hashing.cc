#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int n;
    long long nums = 0;
    string s;
    cin >> n >> s;

    for (int i = 0; i < s.size(); i++) {
        int r = 31;

        if (i == 0)
            r = 1;
        else
            for (int j = 1; j < i; j++)
                r *= 31;
        
        nums += (int(s[i]) - 96) * r;
    }

    cout << nums % 1234567891 << "\n";
    
    return 0;
}
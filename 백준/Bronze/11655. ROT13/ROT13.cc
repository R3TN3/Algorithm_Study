#include <iostream>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            if (s[i] + 13 > 90)
                s[i] += 13 -26;
            else
                s[i] += 13;
        }

        else if (s[i] >= 'a' && s[i] <= 'z') {
            if (s[i] + 13 > 122)
                s[i] += 13 -26;
            else
                s[i] += 13;
        }
    }
    cout << s << "\n";
    
    return 0;
}
#include <iostream>
#include <string>
using namespace std;

int main() {
    int tmp = 0;
    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'A' || s[i] == 'B' || s[i] == 'C')
            tmp += 3;
        else if (s[i] == 'D' || s[i] == 'E' || s[i] == 'F')
            tmp += 4;
        else if (s[i] == 'G' || s[i] == 'H' || s[i] == 'I')
            tmp += 5;
        else if (s[i] == 'J' || s[i] == 'K' || s[i] == 'L')
            tmp += 6;
        else if (s[i] == 'M' || s[i] == 'N' || s[i] == 'O')
            tmp += 7;
        else if (s[i] == 'P' || s[i] == 'Q' || s[i] == 'R' || s[i] == 'S')
            tmp += 8;
        else if (s[i] == 'T' || s[i] == 'U' || s[i] == 'V')
            tmp += 9;
        else if (s[i] == 'W' || s[i] == 'X' || s[i] == 'Y' || s[i] == 'Z')
            tmp += 10;
    }

    cout << tmp << endl;
    
    return 0;
}
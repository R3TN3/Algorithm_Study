#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    string s, p;
    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> s >> p;
        int cnt = 0;

        while (s.find(p) != string::npos) {
            s.replace(s.find(p), p.length(), "");
            cnt++;
        }

        cout << cnt + s.length() << endl;
        
    }
    return 0;
}
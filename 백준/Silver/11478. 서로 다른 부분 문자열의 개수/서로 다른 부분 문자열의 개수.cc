#include <iostream>
#include <string>
#include <set>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    string s;
    set<string> arr;
    cin >> s;

    for (int i = 1; i <= s.size(); i++) {
        for (int j = 0; j < s.size(); j++) {
            if (i+j > s.size()) break;
            arr.insert(s.substr(j, i));
        }
    }

    cout << arr.size() << "\n";
    
    return 0;
}
#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int n;
    int cnt = 0, title = 0;
    cin >> n;

    while (cnt < n) {
        title++;

        if (to_string(title).find("666") != string::npos)
            cnt++;
    }

    cout << title << "\n";
    
    return 0;
}
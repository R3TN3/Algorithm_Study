#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    string n;
    cin >> n;

    while (n.length() % 3 != 0)
        n = "0" + n;

    for (int i = 0; i < n.length(); i+=3)
        cout << (n[i] - '0') * 4 + (n[i+1] - '0') * 2 + (n[i+2] - '0') * 1;
    cout << "\n";
    
    return 0;
}
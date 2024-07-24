#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int t, c;
    int money[4] = {25, 10, 5, 1};
    cin >> t;
    
    for (int i = 0; i < t; i++) {
        cin >> c;

        for (int j = 0; j < 4; j++) {
            cout << c / money[j] << " ";
            c %= money[j];
        }
        cout << "\n";
    }
    
    return 0;
}
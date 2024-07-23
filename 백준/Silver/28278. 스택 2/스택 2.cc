#include <iostream>
#include <stack>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int n;
    stack<int> s;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int command;
        cin >> command;

        if (command == 1) {
            int x;
            cin >> x;
            s.push(x);
        }
        else if (command == 2) {
            if (!s.empty()) {
                cout << s.top() << "\n";
                s.pop();
            }
            else
                cout << -1 << "\n";
        }
        else if (command == 3)
            cout << s.size() << "\n";
        else if (command == 4) {
            if (s.empty())
                cout << 1 << "\n";
            else
                cout << 0 << "\n";
        }
        else if (command == 5) {
            if (!s.empty())
                cout << s.top() << "\n";
            else
                cout << -1 << "\n";
        }
    }
    
    return 0;
}
#include <iostream>
#include <queue>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int n;
    queue<int> q;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string command;
        cin >> command;

        if (command == "push") {
            int num;
            cin >> num;
            q.push(num);
        }
        else if (command == "pop") {
            if (q.size() == 0)
                cout << -1 << "\n";
            else {
                cout << q.front() << "\n";
                q.pop();
            }
        }
        else if (command == "size") {
            cout << q.size() << "\n";
        }
        else if (command == "empty") {
            cout << q.empty() << "\n";
        }
        else if (command == "front") {
            if (q.empty())
                cout << -1 << "\n";
            else
                cout << q.front() << "\n";
        }
        else if (command == "back") {
            if (q.empty())
                cout << -1 << "\n";
            else
                cout << q.back() << "\n";
        }
    }
    
    return 0;
}
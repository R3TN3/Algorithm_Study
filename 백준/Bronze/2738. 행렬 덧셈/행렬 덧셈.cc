#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int n, m;
    vector<int> a, b;
    cin >> n >> m;

    for (int i = 0; i < n*m; i++) {
        int tmp;
        cin >> tmp;
        a.push_back(tmp);
    }

    for (int i = 0; i < n*m; i++) {
        int tmp;
        cin >> tmp;
        b.push_back(tmp);
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << a[j + i*m] + b[j + i*m] << " ";
        }
        cout << "\n";
    }
    
    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int n, sum = 0;
    vector<int> a;
    vector<int> b;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        a.push_back(tmp);
    }

    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        b.push_back(tmp);
    }

    sort(a.rbegin(), a.rend());
    sort(b.begin(), b.end());

    for (int i = 0; i < n; i++) {
        b[i] = b[i] * a[i];
        sum += b[i];
    }

    cout << sum << endl;
    
    return 0;
}
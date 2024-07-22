#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int n, m;
    int cnt = 0;
    vector<string> arr;
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        arr.push_back(s);
    }

    sort(arr.begin(), arr.end());

    for (int i = 0; i < m; i++) {
        string s;
        cin >> s;

        if (binary_search(arr.begin(), arr.end(), s))
            cnt++;
    }

    cout << cnt << "\n";
    
    return 0;
}
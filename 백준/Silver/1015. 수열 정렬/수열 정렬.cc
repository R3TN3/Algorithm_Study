#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    vector<int> sort_a(a);
    sort(sort_a.begin(), sort_a.end());

    vector<int> p;
    for (int i = 0; i < n; i++) {
        int index = find(sort_a.begin(), sort_a.end(), a[i]) - sort_a.begin();
        p.push_back(index);
        sort_a[index] = 0;
    }

    for (auto it : p)
        cout << it << " ";
    cout << "\n";
    
    return 0;
}
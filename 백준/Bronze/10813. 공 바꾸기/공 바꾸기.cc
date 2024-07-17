#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int n, m;
    vector<int> arr;
    cin >> n >> m;

    for (int i = 0; i < n+1; i++)
        arr.push_back(i);

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;

        int tmp = arr[a];
        arr[a] = arr[b];
        arr[b] = tmp;
    }

    for (int i = 1; i < n+1; i++)
        cout << arr[i] << " ";
    cout << "\n";
    
    return 0;
}
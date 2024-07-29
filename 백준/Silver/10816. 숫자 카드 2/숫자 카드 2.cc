#include <iostream>
#include <map>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int n, m, tmp;
    map<int, int> arr;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> tmp;

        arr[tmp]++;    
    }

    cin >> m;

    for (int i = 0; i < m; i++) {
        cin >> tmp;

        map<int, int>::iterator it = arr.find(tmp);

        if (it != arr.end())
            cout << it->second << " ";
        else
            cout << 0 << " ";
    }

    return 0;
}
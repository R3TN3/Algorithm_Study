#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, weight = 0;
    vector<int> arr;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        arr.push_back(tmp);
    }

    sort(arr.begin(), arr.end());

    for (int i = 0; i < n; i++) {
        if (arr[i] * (n-i) > weight)
            weight = arr[i] * (n-i);
    }

    cout << weight << "\n";
    
    return 0;
}
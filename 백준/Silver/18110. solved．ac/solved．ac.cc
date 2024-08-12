#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n;
    cin >> n;

    if (n == 0)
        cout << 0 << "\n";
    else {
        vector<int> arr(n);

        for (int i = 0; i < n; i++)
            cin >> arr[i];
    
        sort(arr.begin(), arr.end());
        
        int cnt = round(n * 0.15);
        double sum = 0;

        for (int i = cnt; i < n-cnt; i++)
            sum += arr[i];

        cout << round(sum / (n - cnt*2)) << "\n";
    }

    return 0;
}
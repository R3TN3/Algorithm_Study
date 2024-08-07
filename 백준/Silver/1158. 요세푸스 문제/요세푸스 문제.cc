#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, k;
    vector<int> arr, ans;
    int cnt = 0;
    cin >> n >> k;

    for (int i = 1; i <= n; i++)
        arr.push_back(i);

    for (int i = 0; i < n; i++) {
        cnt += k-1;

        if (cnt >= arr.size())
            cnt %= arr.size();

        ans.push_back(arr[cnt]);
        arr.erase(arr.begin() + cnt);
    }

    cout << "<" << ans[0];
    for (int i = 1; i < n; i++)
        cout << ", " << ans[i];
    cout << ">" << "\n";
    
    return 0;
}
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, m;
    cin >> n >> m;
    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr+n);

    int cnt = 0;
    int left = 0, right = n-1;
    while (left < right) {
        int num = arr[left] + arr[right];

        if (num < m) left++;
        else if (num > m) right--;
        else {
            cnt++;
            left++;
            right--;
        }
    }

    cout << cnt << "\n";
    
    return 0;
}
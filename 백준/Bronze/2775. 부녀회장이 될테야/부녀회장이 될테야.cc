#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int k, n;
        cin >> k >> n;
        int arr[n];

        for (int j = 0; j < n+1; j++)
            arr[j] = j;

        for (int j = 0; j < k; j++) {
            for (int k = 1; k < n+1; k++)
                arr[k] += arr[k-1];
        }

        cout << arr[n] << "\n"; 
    }
    
    return 0;
}
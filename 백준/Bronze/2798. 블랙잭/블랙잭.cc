#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int n, m;
    int max_num = 0;
    cin >> n >> m;
    vector<int> arr(n);

    for (int& num : arr)
        cin >> num;

    for (int i = 0; i < n-2; i++) {
        for (int j = i+1; j < n-1; j++) {
            for (int k = j+1; k < n; k++) {
                int tmp = arr[i] + arr[j] + arr[k];
                
                if (tmp <= m && tmp > max_num)
                    max_num = tmp;
            }
        }
    }

    cout << max_num << "\n";
        
    return 0;
}
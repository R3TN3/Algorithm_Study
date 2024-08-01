#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int n, m;
    int min_cnt = 65;
    cin >> n >> m;
    vector<string> arr(n);

    for (string& colors : arr)
        cin >> colors;

    for (int i = 0; i < n-7; i++) {
        for (int j = 0; j < m-7; j++) {
            int b_cnt = 0, w_cnt = 0;

            for (int k = i; k < i+8; k++) {
                for (int l = j; l < j+8; l++) {
                    if ((k+l) % 2 == 0) {
                        if (arr[k][l] != 'B')
                            b_cnt++;
                        if (arr[k][l] != 'W')
                            w_cnt++;
                    }
                    else {
                        if (arr[k][l] != 'W')
                            b_cnt++;
                        if (arr[k][l] != 'B')
                            w_cnt++;
                    }
                }
            }

            if (b_cnt <= w_cnt && b_cnt < min_cnt)
                min_cnt = b_cnt;
            else if (w_cnt < b_cnt && w_cnt < min_cnt)
                min_cnt = w_cnt;
        }
    }

    cout << min_cnt << "\n";
    
    return 0;
}
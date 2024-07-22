#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n;
    int arr[100][100] = {0, };
    int cnt = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;

        for (int j = x; j < x+10; j++) {
            for (int k = y; k < y+10; k++)
                arr[j][k] = 1;
        }
    }

    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 100; j++) {
            if (arr[i][j] == 1)
                cnt += 1;
        }
    }

    cout << cnt << "\n";
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int x1, y1, x2, y2;
    int cnt = 0;
    bool arr[101][101] = {false, };

    for (int i = 0; i < 4; i++) {
        cin >> x1 >> y1 >> x2 >> y2;

        for (int j = x1; j < x2; j++) {
            for (int k = y1; k < y2; k++) {
                if (!arr[k][j]) {
                    arr[k][j] = 1;
                    cnt++;
                }
            }
        }
    }

    cout << cnt << "\n";
    
    return 0;
}
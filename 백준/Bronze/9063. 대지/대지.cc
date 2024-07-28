#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int n;
    int min_x = 10001, max_x = -10001;
    int min_y = 10001, max_y = -10001;   
    cin >> n;

    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;

        if (x > max_x)
            max_x = x;
        if (x < min_x)
            min_x = x;

        if (y > max_y)
            max_y = y;
        if (y < min_y)
            min_y = y;
    }

    cout << (max_x - min_x) * (max_y - min_y) << "\n";
    
    return 0;
}
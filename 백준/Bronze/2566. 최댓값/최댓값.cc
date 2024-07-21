#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int max_num = -1, max_index[2] = {0, 0};

    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= 9; j++) {
            int tmp;
            cin >> tmp;

            if (tmp > max_num) {
                max_num = tmp;
                max_index[0] = i;
                max_index[1] = j;
            }
        }
    }

    cout << max_num << "\n";
    cout << max_index[0] << " " << max_index[1] << "\n";
    
    return 0;
}
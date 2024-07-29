#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int num = 0, max_num = 0;

    for (int i = 0 ; i < 4; i++) {
        int in_num, out_num;
        cin >> out_num >> in_num;

        num -= out_num;
        num += in_num;

        if (num > max_num)
            max_num = num;
    }

    cout << max_num << "\n";
    
    return 0;
}
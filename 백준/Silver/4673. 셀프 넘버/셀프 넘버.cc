#include <iostream>
#include <vector>
#include <algorithm>
 using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    vector<bool> self_num(10001, true);

    for (int i = 1; i <= 10000; i++) {
        int num = i;
        int tmp = num;

        while (tmp) {
            num += tmp % 10;
            tmp /= 10;
        }

        if (num <= 10000)
            self_num[num] = false;
    }

    for (int i = 1; i <= 10000; i++) {
        if (self_num[i])
            cout << i << "\n";
    }
    
    return 0;
}
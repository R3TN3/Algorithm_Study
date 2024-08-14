#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int n, cnt = 0;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (i < 100)
            cnt++;
        else if (i < 1000) {
            if ((i/100)%10 - (i/10)%10 == (i/10)%10 - i%10)
                cnt++;
        }
        else {
            if (i/1000 - (i/100)%10 == (i/100)%10 - (i/10)%10 && (i/100)%10 - (i/10)%10 == (i/10)%10 - i%10)
                cnt++;
        }            
    }

    cout << cnt << "\n";
    
    return 0;
}
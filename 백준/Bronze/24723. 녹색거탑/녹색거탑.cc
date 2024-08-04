#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n, cnt = 1;
    cin >> n;

    for (int i = 0; i < n; i++)
        cnt *= 2;

    cout << cnt << "\n";
    
    return 0;
}
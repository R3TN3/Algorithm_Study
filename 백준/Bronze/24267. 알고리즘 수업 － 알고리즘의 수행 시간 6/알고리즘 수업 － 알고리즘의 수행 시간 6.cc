#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    long long n;
    long long cnt;
    int degree = 3;
    cin >> n;

    cnt = n * (n-1) * (n-2) / 6;

    cout << cnt << "\n";
    cout << degree << "\n";
    
    return 0;
}
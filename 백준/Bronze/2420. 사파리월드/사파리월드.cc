#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    long long n, m;
    cin >> n >> m;

    if (n > m)
        cout << n-m << "\n";
    else
        cout << m-n << "\n";
    
    return 0;
}
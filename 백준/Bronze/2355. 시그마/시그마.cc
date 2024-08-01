#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    long long a, b;
    long long nums;
    cin >> a >> b;

    if (a > b)
        nums = (a+b) * ((a-b)+1) / 2;
    else
        nums = (a+b) * ((b-a)+1) / 2;

    cout << nums << "\n";
    
    return 0;
}
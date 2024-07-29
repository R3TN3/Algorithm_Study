#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int a, b, c;
    cin >> a >> b >> c;

    if (a+b+c != 180)
        cout << "Error" << "\n";
    else {
        if (a == b && b == c)
            cout << "Equilateral" << "\n";
        else if (a == b || b == c || c == a)
            cout << "Isosceles" << "\n";
        else
            cout << "Scalene" << "\n";
    }
    
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int a, b, c;
    int max_side;

    while (true) {
        cin >> a >> b >> c;

        if (a == 0 && b == 0 && c == 0)
            break;

        if (a > b && a > c)
            max_side = a;
        else if (b > a && b > c)
            max_side = b;
        else
            max_side = c;

        if (max_side >= a + b + c - max_side)
            cout << "Invalid" << "\n";
        else if (a == b && b == c)
            cout << "Equilateral" << "\n";
        else if (a == b || b == c || c == a)
            cout << "Isosceles" << "\n";
        else
            cout << "Scalene" << "\n";
    }
    
    return 0;
}
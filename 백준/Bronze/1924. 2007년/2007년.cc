#include <iostream>
using namespace std;

int main() {
    int x, y;
    int sum = 0;
    cin >> x >> y;

    for (int i = 0; i < x; i++) {
        if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
            sum += 31;
        else if (i == 4 || i == 6 || i == 9 || i == 11)
            sum += 30;
        else
            sum += 28;
    }

    sum += y;

    if (sum % 7 == 1)
        cout << "MON" << endl;
    else if (sum % 7 == 2)
        cout << "TUE" << endl;
    else if (sum % 7 == 3)
        cout << "WED" << endl;
    else if (sum % 7 == 4)
        cout << "THU" << endl;
    else if (sum % 7 == 5)
        cout << "FRI" << endl;
    else if (sum % 7 == 6)
        cout << "SAT" << endl;
    else
        cout << "SUN" << endl;
    
    return 0;
}
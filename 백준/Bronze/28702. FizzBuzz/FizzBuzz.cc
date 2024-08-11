#include <iostream>
#include <cctype>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    string arr[3];
    int num, index = 0;
    cin >> arr[0] >> arr[1] >> arr[2];

    for (int i = 0; i < 3; i++) {
        if (isdigit(arr[i][0]))
            index = i;
    }

    num = stoi(arr[index]) + (3-index);
    if (num % 3 == 0 && num % 5 != 0)
        cout << "Fizz" << "\n";
    else if (num % 3 != 0 && num % 5 == 0)
        cout << "Buzz" << "\n";
    else if (num % 3 == 0 && num % 5 == 0)
        cout << "FizzBuzz" << "\n";
    else
        cout << num << "\n";
    
    return 0;
}
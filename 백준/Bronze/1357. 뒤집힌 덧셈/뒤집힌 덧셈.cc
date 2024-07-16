#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    string x, y, sum;
    int int_sum;
    string reversed_x = "", reversed_y = "", reversed_sum = "";
    cin >> x >> y;

    for (int i = 0; i < x.length(); i++)
        reversed_x = x[i] + reversed_x;

    for (int i = 0; i < y.length(); i++)
        reversed_y = y[i] + reversed_y;

    int_sum = stoi(reversed_x) + stoi(reversed_y);
    sum = to_string(int_sum);

    for (int i = 0; i < sum.length(); i++)
        reversed_sum = sum[i] + reversed_sum;

    cout << stoi(reversed_sum) << endl;
    
    
    return 0;
}
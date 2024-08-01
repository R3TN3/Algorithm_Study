#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int b, c, d;
    cin >> b >> c >> d;

    vector<int> b_list(b), c_list(c), d_list(d);

    for (int& price : b_list) cin >> price;
    for (int& price : c_list) cin >> price;
    for (int& price : d_list) cin >> price;

    int price_max = 0;

    for (int price : b_list)
        price_max += price;

    for (int price : c_list)
        price_max += price;

    for (int price : d_list)
        price_max += price;
    

    sort(b_list.rbegin(), b_list.rend());
    sort(c_list.rbegin(), c_list.rend());
    sort(d_list.rbegin(), d_list.rend());

    int min_num = min({b, c, d});
    int price_min = 0;

    for (int i = 0; i < min_num; i++)
        price_min += (b_list[i] + c_list[i] + d_list[i]) * 0.9;

    for (int i = min_num; i < b; i++)
        price_min += b_list[i];

    for (int i = min_num; i < c; i++)
        price_min += c_list[i];

    for (int i = min_num; i < d; i++)
        price_min += d_list[i];

    cout << price_max << "\n";
    cout << price_min << "\n";
    
    return 0;
}
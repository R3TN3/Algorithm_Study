#include <iostream>
#include <vector>
using namespace std;

int gcd(int a, int b) {
    while (b) {
        int tmp = b;
        b = a % b;
        a = tmp;
    }

    return a;
}

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int n, a;
    int cnt = 0;
    vector<int> arr;
    cin >> n >> a;

    for (int i = 0; i < n-1; i++) {
        int num;
        cin >> num;
        arr.push_back(num - a);
        a = num;
    }

    int g = arr[0];
    for (int i = 1; i < arr.size(); i++)
        g = gcd(g, arr[i]);

    for (int i = 0; i < arr.size(); i++)
        cnt += arr[i] / g - 1;

    cout << cnt << "\n";
    
    
    return 0;
}
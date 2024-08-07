#include <iostream>
#include <vector>
using namespace std;

int gcd(int a, int b) {
    while (b) {
        int tmp = b;
        b = a%b;
        a = tmp;
    }

    return a;
}

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n;
    vector<int> arr; 
    cin >> n;

    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        arr.push_back(tmp);
    }

    for (int i = 1; i < n; i++) {
        int num = gcd(arr[0], arr[i]);
        cout << arr[0] / num << "/" << arr[i] / num << "\n";     
    }
    
    return 0;
}
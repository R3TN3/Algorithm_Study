#include <iostream>
#include <vector>
using namespace std;

long double ccw(long double x1, long double y1, long double x2, long double y2, long double x3, long double y3) {
    long double size = x1*y2 + x2*y3 + x3*y1 - y1*x2 - y2*x3 - y3*x1;
    return size / 2;
}

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int n;
    long double area = 0;
    vector<pair<int, int>> arr;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        arr.push_back(make_pair(x, y));
    }

    for (int i = 1; i < n-1; i++)
        area += ccw(arr[0].first, arr[0].second, arr[i].first, arr[i].second, arr[i+1].first, arr[i+1].second);


    cout << fixed;
    cout.precision(1);
    cout << abs(area) << "\n";
    
    return 0;
}
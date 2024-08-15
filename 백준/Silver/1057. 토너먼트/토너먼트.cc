#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int n, kim, yim;
    int cnt = 0;
    cin >> n >> kim >> yim;

    while (kim != yim) {
        kim -= kim / 2;
        yim -= yim / 2;
        cnt++;
    }

    cout << cnt << "\n";
    
    return 0;
}
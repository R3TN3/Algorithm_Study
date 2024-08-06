#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n;
    vector<int> weight, height;
    cin >> n;
    
    vector<int> score(n);

    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        
        weight.push_back(x);
        height.push_back(y);
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (weight[i] < weight[j] && height[i] < height[j])
                score[i]++;
        }
    }

    for (auto i : score)
        cout << i + 1 << " ";
    
    return 0;
}
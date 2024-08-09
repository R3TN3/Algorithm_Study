#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n;
    vector<string> arr;
    bool exist = false;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string a, b;
        cin >> a >> b;

        if (!exist && (a == "ChongChong" || b == "ChongChong")) {
            exist = true;

            arr.push_back("ChongChong");
            
            if (a != "ChongChong")
                arr.push_back(a);
            else if (b != "ChongChong")
                arr.push_back(b);

            continue;
        }

        if (exist) {
            auto it1 = find(arr.begin(), arr.end(), a);
            auto it2 = find(arr.begin(), arr.end(), b);

            if (it1 != arr.end() || it2 != arr.end()) {
                if (it1 == arr.end())
                    arr.push_back(a);
                else if (it2 == arr.end())
                    arr.push_back(b);
            }
        }
    }

    cout << arr.size() << "\n";
    
    return 0;
}
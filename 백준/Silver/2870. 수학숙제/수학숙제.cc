#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

bool cmp(string a, string b) {
    if (a.size() == b.size())
        return a < b;
    return a.size() < b.size();
}

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int n;
    vector<string> nums;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string s, num = "";
        cin >> s;

        for (char c : s) {
            if (isdigit(c))
                num += c;
            else {
                if (!num.empty()) {
                    nums.push_back(num);
                    num = "";
                }
            }
        }

        if (!num.empty())
            nums.push_back(num);
    }

    for (auto& num : nums) {
        while (num.length() > 1 && num.front() == '0')
            num.erase(num.begin());
    }
    
    sort(nums.begin(), nums.end(), cmp);

    for (auto num : nums)
        cout << num << "\n";
    
    return 0;
}
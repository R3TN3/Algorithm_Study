#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    string s, tmp = "", tmp2 = "";
    int num = 0, min_num;
    vector<string> nums;
    cin >> s;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] != '-')
            tmp += s[i];
        else {
            if (!tmp.empty()) {
                nums.push_back(tmp);
                tmp = "";   
            }
        }   
    }

    if (!tmp.empty())
        nums.push_back(tmp);

    for (int i = 0; i < nums.size(); i++) {
        tmp = nums[i];

        for (int j = 0; j < tmp.length(); j++) {
            if (tmp[j] != '+')
                tmp2 += tmp[j];
            else {
                if (!tmp2.empty()) {
                    num += stoi(tmp2);
                    tmp2 = "";
                }
            }
        }

        if (!tmp2.empty()) {
            num += stoi(tmp2);
            tmp2 = "";
        }

        if (i == 0)
            min_num = num;
        else
            min_num -= num;
        
        num = 0;
     }

    cout << min_num << "\n";

    return 0;
}
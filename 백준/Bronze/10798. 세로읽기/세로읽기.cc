#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    vector<string> words;
    string word;
    int max_len = 0;

    for (int i = 0; i < 5; i++) {
        string tmp;
        cin >> tmp;
        words.push_back(tmp);

        if (words[i].length() > max_len)
            max_len = words[i].length();
    }

    for (int i = 0; i < 5; i++)
        while (words[i].length() < max_len)
            words[i] += " ";

    for (int i = 0; i < max_len; i++) {
        for (int j = 0; j < 5; j++) {
            word += words[j][i];
        }
    }

    word.erase(remove(word.begin(), word.end(), ' '), word.end());
    cout << word << endl;

    return 0;
}
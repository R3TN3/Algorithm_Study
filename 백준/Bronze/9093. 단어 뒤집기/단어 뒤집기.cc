#include <iostream>
#include <sstream>
using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore();
    string s;

    for (int i = 0; i < t; i++) {
        getline(cin, s);
        stringstream ss(s);
        string word;

        while (ss >> word) {
            for (int j = word.size() - 1; j >= 0; j--) {
                cout << word[j];
            }
            cout << " ";
        }
        cout << endl;
    }
    
    return 0;
}
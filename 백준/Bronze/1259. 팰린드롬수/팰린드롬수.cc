#include <iostream>
#include <string>
using namespace std;

int main() {
  while (1) {
    int i, cnt = 1;
    string s;
    cin >> s;

    if (s == "0")
      break;

    for(i = 0; i < s.length() / 2; i++) {
      if (s[i] != s[s.length() -1 - i]) {
        cout << "no" << "\n";
        cnt = 0;
        break;
      }
    }
    
    if(cnt)
      cout << "yes" << "\n";
  }
}
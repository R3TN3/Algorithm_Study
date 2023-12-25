#include <iostream>
#include <string>
using namespace std;

int main() {
  int n, i;
  cin >> n;

  for (i = 0; i < n; i++) {
    string s;
    cin >> s;

    while (s.find("()") != string::npos)
      s.replace(s.find("()"), 2, "");

    if (s.length() == 0)
      cout << "YES" << "\n";
    else
      cout << "NO" << "\n";
  }
}
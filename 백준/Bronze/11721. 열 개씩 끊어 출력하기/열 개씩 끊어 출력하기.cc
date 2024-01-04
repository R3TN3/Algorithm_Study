#include <iostream>
#include <string>
using namespace std;

int main() {
  string s;

  cin >> s;
  int len_s = s.length();

  for (int i = 0; i < len_s / 10 + 1; i++)
    cout << s.substr(i*10, 10) << "\n";
}
#include <iostream>
using namespace std;

int main() {
  string s;
  char i;
  cin >> s;

  for (i = 'a'; i <= 'z'; i++) {
    if (s.find(i) == string::npos)
      cout << -1 << " ";
    else
      cout << s.find(i) << " ";
  }
}
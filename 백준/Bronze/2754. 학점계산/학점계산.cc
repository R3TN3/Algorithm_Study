#include <iostream>
using namespace std;

int main() {
  double num = 0.0;
  char s[3];
  cin >> s;

  if (s[0] == 'A')
    num += 4;
  else if (s[0] == 'B')
    num += 3;
  else if (s[0] == 'C')
    num += 2;
  else if (s[0] == 'D')
    num += 1;

  if (s[1] == '+')
    num += 0.3;
  else if (s[1] == '-')
    num -= 0.3;

  cout << fixed;
  cout.precision(1);
  cout << num;
}
#include <iostream>
using namespace std;

int main() {
  string str;
  int cnt = 1;

  getline(cin, str);

  for (int i = 0; i < str.length(); i++) {
    if (str[i] == ' ') {
      cnt++;
    }
  }

  if (str[0] == ' ')
    cnt--;
  if (str[str.length() - 1] == ' ')
    cnt--;

  cout << cnt << "\n";
}
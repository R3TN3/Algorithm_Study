#include <iostream>
#include <string>
using namespace std;

int counter(string str) {
  string cro_alpha[8] = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};

  for (int i = 0; i < 8; i++) {
    while (1) {
      if (str.find(cro_alpha[i]) != -1) {
        str.replace(str.find(cro_alpha[i]), cro_alpha[i].length(), "#");
      }
      else
        break;
    }
  }

  return str.length();
}

int main() {
  string s;

  cin >> s;
  cout << counter(s);
}
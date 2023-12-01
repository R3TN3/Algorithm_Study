#include <iostream>
using namespace std;

int main() {
  string input;
  int alpha[26] = {0, }, cnt = 0;
  cin >> input;

  for (int i = 0; i < input.length(); i++) {
    if (input[i] < 97)
      alpha[input[i] - 65]++;
    else
      alpha[input[i] - 97]++;
  }

  int max = 0, max_index = 0;

  for (int i = 0; i < 26; i++) {
    if (alpha[i] > max) {
      max = alpha[i];
      max_index = i;
    }
  }

  for (int i = 0; i < 26; i++) {
    if (max == alpha[i])
      cnt++;
  }

  if (cnt > 1)
    cout << "?";
  else
    cout << (char)(max_index + 65);
}
#include <iostream>
#include <string>
using namespace std;

int main() {
  string a, b;
  string reverse_a, reverse_b;
  cin >> a >> b;

  for (int i = 0; i < 3; i++) {
    reverse_a += a[2-i];
    reverse_b += b[2-i];
  }

  if (stoi(reverse_a) > stoi(reverse_b))
    cout << stoi(reverse_a) << "\n";
  else
    cout << stoi(reverse_b) << "\n";
}
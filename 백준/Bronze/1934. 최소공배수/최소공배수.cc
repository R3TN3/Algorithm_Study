#include <iostream>
using namespace std;

int gcd(int x, int y) {
  while (y) {
    int tmp = y;
    y = x % y;
    x = tmp;
  }

  return x;
}

int main() {
  int t;
  cin >> t;

  for (int i = 0; i < t; i++) {
    int x, y;
    cin >> x >> y;

    cout << (x * y) / gcd(x, y) << "\n";
  }
}
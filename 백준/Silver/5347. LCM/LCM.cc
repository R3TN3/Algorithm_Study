#include <iostream>
using namespace std;

int gcd(long x, long y) {
  while (y) {
    long tmp = y;
    y = x % y;
    x = tmp;
  }

  return x;
}

int main() {
  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    long a, b;
    cin >> a >> b;

    cout << a * b / gcd(a, b) << "\n";
  }
}
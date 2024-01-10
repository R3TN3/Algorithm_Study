#include <iostream>
using namespace std;

int gcd(long long int x, long long int y) {
  while (y) {
    long long int tmp = x;
    x = y;
    y = tmp % y;
  }

  return x;
}

int main() {
  long long int a, b;
  cin >> a >> b;

  cout << a * b / gcd(a, b) << "\n";
}
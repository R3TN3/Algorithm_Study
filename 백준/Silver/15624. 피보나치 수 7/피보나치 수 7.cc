#include <iostream>
using namespace std;

int fib(int n) {
  long a = 0, b = 1, tmp;

  for (int i = 0; i < n; i++) {
    tmp = a;
    a = b;
    b += tmp;
  }

  return a;
}

int main() {
  int n;
  cin >> n;
  long i = 1000000007;

  cout << fib(n) % i << "\n";
}
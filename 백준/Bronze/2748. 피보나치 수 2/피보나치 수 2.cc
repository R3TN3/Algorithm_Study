#include <iostream>
using namespace std;

long fib(int num) {
  long a = 0, b = 1;

  for (int i = 0; i < num; i++) {
    long tmp = a;
    a = b;
    b += tmp;
  }

  return a;
}

int main() {
  int n;
  cin >> n;

  cout << fib(n) << "\n";
}
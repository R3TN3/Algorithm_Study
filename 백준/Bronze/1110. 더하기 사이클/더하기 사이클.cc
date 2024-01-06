#include <iostream>
using namespace std;

int main() {
  int n, a, b;
  int cnt = 0;

  cin >> n;
  a = n / 10;
  b = n % 10;

  while (1) {
    int tmp;
    tmp = a;
    a = b;
    b = (tmp + a) % 10;
    cnt++;

    if (n == a * 10 + b)
      break;
  }

  cout << cnt << "\n";
}
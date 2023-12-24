#include <iostream>
using namespace std;

int main() {
  int a, b, c;

  for (;;) {
    cin >> a >> b >> c;

    if (a == 0 && b == 0 && c == 0)
      break;

    if (a > b && a > c) {
      if (a * a == b * b + c * c)
        cout << "right" << "\n";
      else
        cout << "wrong" << "\n";
    }

    if (b > a && b > c) {
      if (b * b == a * a + c * c)
        cout << "right" << "\n";
      else
        cout << "wrong" << "\n";
    }

    if (c > a && c > b) {
      if (c * c == a * a + b * b)
        cout << "right" << "\n";
      else
        cout << "wrong" << "\n";
    }
  }
}
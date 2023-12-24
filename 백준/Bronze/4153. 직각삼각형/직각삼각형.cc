#include <iostream>
using namespace std;

int main() {
  int a, b, c;
  int tmp;

  for (;;) {
    cin >> a >> b >> c;

    if (a == 0 && b == 0 && c == 0)
      break;

    if (b > a) {
      tmp = a;
      a = b;
      b = tmp;
    }

    if (c > a) {
      tmp = a;
      a = c;
      c = tmp;
    }
    
    if (a * a == b * b + c * c)
        cout << "right" << "\n";
      else
        cout << "wrong" << "\n";
  }
}
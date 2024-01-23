#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int cnt = n / 5;
  bool tmp = true;

  for (int i = cnt; i >= 0; i--) {
    if ((n - i * 5) % 3 == 0) {
      tmp = false;
      cout << i + (n - i * 5) / 3 << "\n";
      break;
    }
  }

  if (tmp)
    cout << -1 << "\n";
}
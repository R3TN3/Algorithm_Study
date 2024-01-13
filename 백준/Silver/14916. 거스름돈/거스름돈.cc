#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int tmp_5 = n / 5;
  bool flag = true;

  for (int i = tmp_5; i >= 0; i--) {
    if ((n - i * 5) % 2 == 0) {
      cout << i + (n - i * 5) / 2 << "\n";
      flag = false;
      break;
    }
  }

  if (flag)
    cout << -1 << "\n";
}
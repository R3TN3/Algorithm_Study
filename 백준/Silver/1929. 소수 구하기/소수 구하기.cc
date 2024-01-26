#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int m, n;
  bool prime_num;
  cin >> m >> n;

  for (int i = m; i <= n; i++) {
    prime_num = true;

    if (i == 1) {
      prime_num = false;
      continue;
    }
      
    for (int j = 2; j <= (int)sqrt(i); j++) {
      if (i % j == 0) {
        prime_num = false;
        break;
      }
    }

    if (prime_num)
      cout << i << "\n";
  }
}
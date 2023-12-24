#include <iostream>
using namespace std;

int main() {
  int n, i, j;
  int s[101];
  int cnt = 0;

  cin >> n;

  for (i = 0; i < n; i++) {
    int tmp = 0;
    cin >> s[i];
    
    if (s[i] == 1)
      continue;

    for (j = 2; j < s[i]; j++) {
      if (s[i] % j == 0) {
        tmp += 1;
        break;
      }
    }
    if (tmp == 0)
      cnt += 1;
  }

  cout << cnt;
}
#include <iostream>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  int cnt = 0;
  int coin_arr[n];

  for (int i = 0; i < n; i++)
    cin >> coin_arr[i];

  for (int i = n-1; i >= 0; i--) {
    if (k == 0)
      break;

    if (k >= coin_arr[i]) {
      cnt += k / coin_arr[i];
      k -= coin_arr[i] * (k / coin_arr[i]);
    }
  }

  cout << cnt << "\n";
}
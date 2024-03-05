#include <iostream>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, k;
  cin >> n >> k;
  int start = 0, end = k;
  int answer = 0;

  while (start <= end) {
    int mid = (start + end) / 2;
    int cnt = 0;

    for (int i = 1; i <= n; i++)
      cnt += min(mid / i, n);

    if (cnt >= k) {
      end = mid - 1;
      answer = mid;
    }
    else
      start = mid + 1;
  }

  cout << answer << "\n";

  return 0;
}
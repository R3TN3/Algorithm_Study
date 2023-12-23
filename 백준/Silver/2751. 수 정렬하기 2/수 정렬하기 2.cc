#include <algorithm>
#include <iostream>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, i;
  int arr[1000001];

  cin >> n;

  for (i = 0; i < n; i++) {
    cin >> arr[i];
  }

  sort(arr, arr + n);

  for (i = 0; i < n; i++) {
    cout << arr[i] << "\n";
  }
}
#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  
  int n, m, num;
  cin >> n;
  int *arr = new int[n];

  for (int i = 0; i < n; i++)
    cin >> arr[i];

  sort(arr, arr + n);
  
  cin >> m;

  for (int i = 0; i < m; i++) {
    cin >> num;
    if (binary_search(arr, arr + n, num))
      cout << 1 << " ";
    else
      cout << 0 << " ";
  }
}
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, l;
  cin >> n >> l;
  int arr[n];
  
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  sort(arr, arr + n);

  for (int i = 0; i < n; i++) {
    if (l >= arr[i])
      l++;
    else
      break;
  }

  cout << l << "\n";
  
  return 0;
}
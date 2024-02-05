#include <iostream>
#include <algorithm>
using namespace std;

bool compare(int a, int b) {
  return a > b;
}

int main() {
  int n;
  int sum = 0;
  cin >> n;
  
  int arr[n];

  for (int i = 0; i < n; i++)
    cin >> arr[i];

  sort(arr, arr+n, compare);

  for (int i = 0; i < n-2; i++) {
    if (arr[i] < arr[i+1] + arr[i+2]) {
      sum += (arr[i] + arr[i+1] + arr[i+2]);
      break;
    }
  }

  if (sum == 0)
    cout << -1 << "\n";
  else
    cout << sum << "\n";
}
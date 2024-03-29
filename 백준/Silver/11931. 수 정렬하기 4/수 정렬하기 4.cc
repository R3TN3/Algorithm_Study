#include <iostream>
#include <algorithm>
using namespace std;

bool compare(int a, int b) {
  return a > b;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  
  int n;
  cin >> n;
  int arr[n];

  for (int i = 0 ; i < n; i++)
    cin >> arr[i];

  sort(arr, arr + n, compare);
  
  for (int i = 0 ; i < n; i++)
    cout << arr[i] << "\n";
}
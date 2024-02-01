#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
  int n, v;
  cin >> n;
  
  int *arr = new int[n];

  for (int i = 0; i < n; i++)
    cin >> arr[i];

  cin >> v;
  cout << count(arr, arr+n, v) << "\n";
}
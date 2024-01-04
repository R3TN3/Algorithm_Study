#include <algorithm>
#include <iostream>
using namespace std;

bool compareRows(const int *row1, const int *row2) {
  if (row1[0] == row2[0])
    return row1[1] < row2[1];

  return row1[0] < row2[0];
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n;
  cin >> n;

  int **arr = new int *[n];
  for (int i = 0; i < n; i++) {
    arr[i] = new int[2];
  }

  for (int i = 0; i < n; i++) {
    cin >> arr[i][0] >> arr[i][1];
  }

  sort(arr, arr + n, compareRows);

  for (int i = 0; i < n; i++) {
    cout << arr[i][0] << " " << arr[i][1] << "\n";
  }
}
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n;
  cin >> n;
  vector<int> arr(n);

  for (int i = 0; i < n; i++)
    cin >> arr[i];

  vector<int> sorted_arr(arr);
  sort(sorted_arr.begin(), sorted_arr.end());
  sorted_arr.erase(unique(sorted_arr.begin(), sorted_arr.end()), sorted_arr.end());

  for (int i = 0; i < n; i++) {
    auto answer = lower_bound(sorted_arr.begin(), sorted_arr.end(), arr[i]);
    cout << distance(sorted_arr.begin(), answer) << " ";
  }

  return 0;
}
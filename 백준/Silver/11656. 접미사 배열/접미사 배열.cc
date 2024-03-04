#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  string s;
  string arr[1000];
  cin >> s;

  for (int i = 0; i < s.length(); i++)
    arr[i] = s.substr(i, s.length() - i);

  sort(arr, arr + s.length());

  for (int i = 0; i < s.length(); i++)
    cout << arr[i] << "\n";

  return 0;
}
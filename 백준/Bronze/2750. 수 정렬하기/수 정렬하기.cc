#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int n;
  cin >> n;
  string s = "";
  int tmp[n];

  for (int i = 0; i < n; i++) {
    cin >> tmp[i];
  }

  sort(tmp, tmp + n);

  for (int i = 0; i < n; i++) {
    s += to_string(tmp[i]) + "\n";
  }

  cout << s;
}
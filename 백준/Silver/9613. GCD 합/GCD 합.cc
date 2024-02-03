#include <iostream>
using namespace std;

int gcd(int x, int y) {
  while(x) {
    int tmp = x;
    x = y % x;
    y = tmp;
  }
  
  return y;
}

int main() {
  int t, n;
  cin >> t;

  for (int i = 0; i < t; i++) {
    cin >> n;
    int num[n];
    long long sum = 0;

    for (int j = 0; j < n; j++)
      cin >> num[j];

    for (int j = 0; j < n-1; j++) {
      for (int k = j+1; k < n; k++) {
        sum += gcd(num[j], num[k]);
      }
    }

    cout << sum << "\n";
  }
}
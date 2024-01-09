#include <iostream>
using namespace std;

int fac(int num) {
  int sum = 1;

  for (int i = 1; i < num + 1; i++)
    sum *= i;

  return sum;
}

int main() {
  int n, k;
  cin >> n >> k;

  int bin_coe = fac(n) / (fac(k) * fac(n - k));
  cout << bin_coe << "\n";
}
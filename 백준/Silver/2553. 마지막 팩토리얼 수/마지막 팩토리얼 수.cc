#include <iostream>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  
  int n;
  long long sum = 1;
  cin >> n;

  for (int i = 1; i <= n; i++) {
    sum *= i;
    sum %= 10000000;
    
    while (sum % 10 == 0)
      sum /= 10;
    }

  cout << sum % 10 << "\n";
}
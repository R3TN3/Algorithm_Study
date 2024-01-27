#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int dp[1000000] = {0,1};

  for (int i = 2; i <= n; i++)
    dp[i] = (dp[i-1] + dp[i-2]) % 1000000007;

  cout << dp[n] << "\n";
}
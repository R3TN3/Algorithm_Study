#include <iostream>
using namespace std;

int main() {
  unsigned long long P[101];
  P[0] = 0;
  P[1] = 1;
  P[2] = 1;
  P[3] = 1;

  for(int i = 4; i < 101; i++)
    P[i] = P[i - 2] + P[i - 3];

  int t;
  cin >> t;

  for(int i = 0; i < t; i++) {
    int n;
    cin >> n;
    cout << P[n] << "\n";
  }
}
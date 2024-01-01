#include <iostream>
using namespace std;

int main() {
  int n, k = 1;
  long s = 3 * k * k - 3 * k + 1;

  cin >> n;

  while(n > s){
    k ++;
    s = 3 * k * k - 3 * k + 1;
  }

  cout << k << "\n";
}
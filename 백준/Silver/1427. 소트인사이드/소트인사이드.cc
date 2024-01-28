#include <iostream>
using namespace std;

int main() {
  string n;
  int arr[10] = {0, };
  cin >> n;
  
  for (int i = 0; i < n.length(); i++)
    arr[n[i] - '0']++;

  for (int i = 9; i >= 0; i--) {
    for (int j = 0; j < arr[i]; j++)
      cout << i;
  }
}
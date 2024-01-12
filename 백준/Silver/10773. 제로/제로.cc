#include <iostream>
#include <stack>
using namespace std;

int main() {
  int k, sum = 0;
  stack <int> arr;
  cin >> k;

  for (int i = 0; i < k; i++) {
    int x;
    cin >> x;

    if (x == 0)
      arr.pop();
    else
      arr.push(x);
  }

  int arr_size = arr.size();

  for (int i = 0; i < arr_size; i++) {
    sum += arr.top();
    arr.pop();
  }

  cout << sum << "\n";
}
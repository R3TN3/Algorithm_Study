#include <iostream>
using namespace std;

int main(void) {
  int check_arr[6] = {1, 1, 2, 2, 2, 8};
  int num;

  for (int i = 0; i < 6; i++) {
    cin >> num;
    cout << check_arr[i] - num << " ";
  }
}
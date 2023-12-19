#include <iostream>
using namespace std;

int main() {
  int i, t, h, w, n;
  int floor, room;
  cin >> t;

  for (i = 0; i < t; i++) {
    cin >> h >> w >> n;
    floor = n % h;
    room = n / h + 1;

    if (floor == 0) {
      floor = h;
      room -= 1;
    }

    cout << floor * 100 + room << "\n";
  }
}
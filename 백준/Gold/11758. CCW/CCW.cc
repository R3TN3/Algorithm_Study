#include <iostream>
using namespace std;

int ccw(int x1, int y1, int x2, int y2, int x3, int y3) {
  return (x2 - x1) * (y3 - y1) - (x3 - x1) * (y2 - y1);
}

int main() {
  int p1_x, p1_y, p2_x, p2_y, p3_x, p3_y;
  cin >> p1_x >> p1_y >> p2_x >> p2_y >> p3_x >> p3_y;

  int result = ccw(p1_x, p1_y, p2_x, p2_y, p3_x, p3_y);

  if (result > 0)
    cout << 1 << "\n";
  else if (result < 0)
    cout << -1 << "\n";
  else
    cout << 0 << "\n";
}
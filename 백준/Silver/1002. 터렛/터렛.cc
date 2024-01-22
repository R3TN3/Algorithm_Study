#include <iostream>
#include <cmath>
using namespace std;

int potential(int x1, int y1, int r1, int x2, int y2, int r2) {
  double dist = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

  if (dist == 0 && r1 == r2)
    return -1;
  else if (dist == abs(r1 - r2) || dist == r1 + r2)
    return 1;
  else if (abs(r1 - r2) < dist && dist < r1 + r2)
    return 2;
  else
    return 0;
}


int main() {
  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    int x1, y1, r1, x2, y2, r2;
    cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

    cout << potential(x1, y1, r1, x2, y2, r2) << "\n";
  }
}
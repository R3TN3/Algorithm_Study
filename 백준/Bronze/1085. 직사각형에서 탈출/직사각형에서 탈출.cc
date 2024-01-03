#include <cmath>
#include <iostream>
using namespace std;

int main() {
  int x, y, w, h;
  double center_x, center_y;

  cin >> x >> y >> w >> h;
  center_x = double(w) / 2;
  center_y = double(h) / 2;

  if (center_x - abs(x - center_x) < center_y - abs(y - center_y))
    cout << int(center_x - abs(x - center_x)) << "\n";
  else
    cout << int(center_y - abs(y - center_y)) << "\n";
}
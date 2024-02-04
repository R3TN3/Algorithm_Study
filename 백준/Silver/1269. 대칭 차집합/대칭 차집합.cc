#include <iostream>
#include <set>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;

  set<int> s;

  for (int i = 0; i < a+b; i++)  {
    int x;
    cin >> x;

    s.insert(x);
  }

  int union_set = s.size();
  int intersection_set = a + b - union_set;

  cout << union_set - intersection_set << "\n";
}
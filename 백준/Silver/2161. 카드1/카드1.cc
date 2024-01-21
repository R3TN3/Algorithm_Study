#include <iostream>
#include <queue>
using namespace std;

int main() {
  queue <int> q;
  int n;
  cin >> n;

  for (int i = 1; i <= n; i++)
    q.push(i);

  while (1) {
    if (q.size() == 1)
      break;

    int discard = q.front();
    q.pop();
    cout << discard << " ";

    int cur = q.front();
    q.pop();
    q.push(cur);
  }

  cout << q.front() << "\n";
}
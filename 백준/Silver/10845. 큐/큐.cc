#include <cstring>
#include <iostream>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int n, num, front = 0, rear = -1;
  char arr[100];
  int queue[10000];

  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> arr;

    if (strcmp(arr, "push") == 0) {
      cin >> num;
      queue[++rear] = num;
    }

    else if (strcmp(arr, "pop") == 0) {
      if (front > rear)
        cout << -1 << "\n";
      else
        cout << queue[front++] << "\n";
    }

    else if (strcmp(arr, "size") == 0) {
      cout << rear - front + 1 << "\n";
    }

    else if (strcmp(arr, "empty") == 0) {
      if (front > rear)
        cout << 1 << "\n";
      else
        cout << 0 << "\n";
    }

    else if (strcmp(arr, "front") == 0) {
      if (front > rear)
        cout << -1 << "\n";
      else
        cout << queue[front] << "\n";
    }

    else if (strcmp(arr, "back") == 0) {
      if (front > rear)
        cout << -1 << "\n";
      else
        cout << queue[rear] << "\n";
    }
  }
}
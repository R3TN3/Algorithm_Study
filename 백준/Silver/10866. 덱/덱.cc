#include <cstring>
#include <iostream>
using namespace std;

int main(void) {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int n, num, front = 5000, back = 5001;
  char arr[100];
  int deque[10000];

  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> arr;

    if (strcmp(arr, "push_front") == 0) {
      cin >> num;
      deque[front--] = num;
    }

    else if (strcmp(arr, "push_back") == 0) {
      cin >> num;
      deque[back++] = num;
    }

    else if (strcmp(arr, "pop_front") == 0) {
      if (front + 1 == back)
        cout << -1 << "\n";
      else
        cout << deque[++front] << "\n";
    }

    else if (strcmp(arr, "pop_back") == 0) {
      if (front + 1 == back)
        cout << -1 << "\n";
      else
        cout << deque[--back] << "\n";
    }

    else if (strcmp(arr, "size") == 0)
      cout << back - front - 1 << "\n";

    else if (strcmp(arr, "empty") == 0) {
      if (front + 1 == back)
        cout << 1 << "\n";
      else
        cout << 0 << "\n";
    }

    else if (strcmp(arr, "front") == 0) {
      if (front + 1 == back)
        cout << -1 << "\n";
      else
        cout << deque[front + 1] << "\n";
    }

    else if (strcmp(arr, "back") == 0) {
      if (front + 1 == back)
        cout << -1 << "\n";
      else
        cout << deque[back - 1] << "\n";
    }
  }
}
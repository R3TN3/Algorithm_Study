#include <iostream>
#include <cstring>
using namespace std;

int main() {
  int n, num, top = -1;
  char arr[100];
  int stack[10000];

  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> arr;

    if (strcmp(arr, "push") == 0) {
      cin >> num;
      stack[++top] = num;
    }

    else if (strcmp(arr, "pop") == 0) {
      if (top == -1)
        cout << -1 << "\n";
      else
        cout << stack[top--] << "\n";
    }

    else if (strcmp(arr, "size") == 0) {
      cout << top + 1 << "\n";
    }

    else if (strcmp(arr, "empty") == 0) {
      if (top == -1)
        cout << 1 << "\n";
      else
        cout << 0 << "\n";
    }

    else if (strcmp(arr, "top") == 0) {
      if (top == -1)
        cout << -1 << "\n";
      else
        cout << stack[top] << "\n";
    }
  }
}
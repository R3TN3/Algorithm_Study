#include <iostream>
#include <cstring>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  
  int n;
  int s[21] = {0, };

  cin >> n;

  for (int i = 0; i < n; i++) {
    char command[10];
    int num;
    cin >> command;

    if (strcmp(command, "add") == 0) {
      cin >> num;
      
      s[num] = 1;
    }

    else if (strcmp(command, "remove") == 0) {
      cin >> num;
      
      s[num] = 0;
    }

    else if (strcmp(command, "check") == 0) {
      cin >> num;
      
      cout << s[num] << "\n";
    }

    else if (strcmp(command, "toggle") == 0) {
      cin >> num;

      s[num] = 1 - s[num];
    }

    else if (strcmp(command, "all") == 0) {
      for (int i = 0; i < 21; i++)
        s[i] = 1;
    }

    else if (strcmp(command, "empty") == 0) {
      for (int i = 0; i < 21; i++)
        s[i] = 0;
    }
  }
}
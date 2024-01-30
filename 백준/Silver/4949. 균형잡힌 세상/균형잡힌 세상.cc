#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(void) {
  while (1) {
    string input;
    getline(cin, input);

    if (input == ".")
      break;

    stack<char> s;
    bool flag = false;

    for (int i = 0; i < input.length(); i++) {
      char c = input[i];

      if ((c == '(') || (c == '['))
        s.push(c);
      else if (c == ')') {
        if (!s.empty() && s.top() == '(')
          s.pop();
        else {
          flag = true;
          break;
        }
      }
      else if (c == ']') {
        if (!s.empty() && s.top() == '[')
          s.pop();
        else {
          flag = true;
          break;
        }
      }
    }

    if (flag == false && s.empty())
      cout << "yes" << "\n";
    else
      cout << "no" << "\n";
  }
}
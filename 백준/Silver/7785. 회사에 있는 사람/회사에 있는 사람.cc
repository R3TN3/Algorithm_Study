#include <iostream>
#include <set>
using namespace std;

int main() {
  int n;
  set<string, greater<string>> company;

  cin >> n;

  for (int i = 0; i < n; i++) {
    string name, command;
    cin >> name >> command;

    if (command == "enter")
      company.insert(name);

    else if (command == "leave")
      company.erase(name);
  }

  for (auto i = company.begin(); i != company.end(); i++)
    cout << *i << "\n";
}
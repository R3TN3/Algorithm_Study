#include <iostream>
#include <set>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  
  int n;
  set<int> arr;
  cin >> n;

  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    arr.insert(a);
  }

  set<int>::iterator iter;
  
  for (iter = arr.begin(); iter != arr.end(); iter++) {
    cout << *iter << " ";
  }
}
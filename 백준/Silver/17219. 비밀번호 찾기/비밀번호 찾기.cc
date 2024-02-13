#include <iostream>
#include <map>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  
  int n, m;
  cin >> n >> m;
  map <string, string> arr;

  for (int i = 0; i < n; i++) {
    string adress, pw;
    cin >> adress >> pw;

    arr[adress] = pw;
  }


  for (int i = 0; i < m; i++) {
    string adress;
    cin >> adress;

    cout << arr[adress] << "\n";
  }
}
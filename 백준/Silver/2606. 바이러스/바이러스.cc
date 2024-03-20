#include <iostream>
#include <vector>
using namespace std;

vector<int> graph[101];
bool visited[101];
int cnt = 0;

void DFS(int v) {
  visited[v] = true;

  for (int i = 0; i < graph[v].size(); i++) {
    int j = graph[v][i];

    if (visited[j] == false) {
      visited[j] = true;
      cnt++;
      DFS(j);
    }
  }

  return;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, t;
  cin >> n >> t;

  for (int i = 0; i < t; i++) {
    int a, b;
    cin >> a >> b;

    graph[a].push_back(b);
    graph[b].push_back(a);
  }

  DFS(1);
  cout << cnt << "\n";

  return 0;
}
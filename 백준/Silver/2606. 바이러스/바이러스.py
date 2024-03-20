import sys

def DFS(v):
  global cnt
  visited[v] = 1

  for i in graph[v]:
    if visited[i] == 0:
      DFS(i)
      cnt += 1

def BFS(v):
  global cnt
  visited[v] = 1
  queue = [v]

  while queue:
    for i in graph[queue.pop()]:
      if visited[i] == 0:
        visited[i] = 1
        queue.insert(0, i)
        cnt += 1

n = int(sys.stdin.readline())
t = int(sys.stdin.readline())
graph = [[] for i in range(n + 1)]
cnt = 0

for i in range(t):
  a, b = map(int, sys.stdin.readline().split())
  graph[a].append(b)
  graph[b].append(a)

visited = [0] * (n + 1)
DFS(1)
# BFS(1)
sys.stdout.write(str(cnt) + "\n")
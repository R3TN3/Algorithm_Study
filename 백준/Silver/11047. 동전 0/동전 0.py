n, k = map(int, input().split())
cnt = 0
coin_arr = []

for i in range(n):
  coin = int(input())
  coin_arr.append(coin)

coin_arr.reverse()


for i in coin_arr:
  if k == 0:
    break
  if k >= i:
    cnt += k // i
    k -= i * (k // i)

print(cnt)
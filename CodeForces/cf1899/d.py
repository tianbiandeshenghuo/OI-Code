def countEqualPowerPairs():
  n = int(input())
  a = list(map(int, input().split()))
  for i in range(n):
    a[i] = 2 ** a[i]
  ans = 0
  for i in range(n):
    for j in range(i + 1, n):
      if (a[i] ** a[j] == a[j] ** a[i]):
        ans += 1
  return ans
  

t = int(input())
for _ in range(t):
  print(countEqualPowerPairs())

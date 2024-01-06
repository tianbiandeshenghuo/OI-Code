def Solve():
  n = int(input())
  a = [int(x) for x in input().split()]
  a = [0] + a
  for i in range(1, n + 1):
    a[i] += a[i - 1]
  ans = -1
  for i in range(1, n + 1):
    if (n % i == 0):
      minn = int(1e18)
      maxx = int(-1e18)
      j = 1
      while (j <= n):
        minn = min(minn, a[j + i - 1] - a[j - 1])
        maxx = max(maxx, a[j + i - 1] - a[j - 1])
        j += i
      ans = max(ans, maxx - minn)
  print(ans)

t = int(input())
for _ in range(t):
  Solve()
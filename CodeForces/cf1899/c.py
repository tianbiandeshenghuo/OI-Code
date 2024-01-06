def Solve():
  n = int(input())
  a = [int(x) for x in input().split()]
  ans = a[0]
  tmp = a[0]
  for i in range(1, n):
    if (a[i] % 2 == (not(a[i - 1] % 2))):
      tmp = max(a[i], tmp + a[i])
    else:
      tmp = a[i]
    ans = max(ans, tmp)
  print(ans)

t = int(input())
for _ in range(t):
  Solve()
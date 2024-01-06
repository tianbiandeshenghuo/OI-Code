def check(x, a, n):
  l = 1
  r = n
  while (l < r):
    while (l <= n and a[l - 1] == x):
      l += 1
    while (r >= 1 and a[r - 1] == x):
      r -= 1
    if (l >= r):
      break
    j = 1
    while (j * j <= a[r - 1]):
      if (a[r - 1] % j == 0 and a[r - 1] // j == x and a[l - 1] * j == x):
        a[l - 1] = a[r - 1] = x
        break
      j += 1
    if (a[l - 1] != x or a[r - 1] != x):
      return 0
  for i in a:
    if (i != x):
      return 0
  return 1

def Solve():
  n = int(input())
  a = [int(x) for x in input().split()]
  a = sorted(a)
  for i in a:
    if (check(i, a, n)):
      print("YES")
      return
  print("NO")



t = int(input())
for _ in range(t):
  Solve()
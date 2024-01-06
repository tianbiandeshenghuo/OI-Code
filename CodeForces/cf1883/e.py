import math as mt

def Solve():
  n = int(input())
  a = [int(x) for x in input().split()]
  ans = 0
  for i in range(1, n):
    while (a[i] < a[i - 1]):
      ans += 1
      a[i] <<= 1
  print(ans)


t = int(input())
for _ in range(t):
  Solve()
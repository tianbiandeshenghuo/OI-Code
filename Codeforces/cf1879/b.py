def Solve():
  n = int(input())
  suma = 0
  sumb = 0
  a = [int(x) for x in input().split()]
  b = [int(x) for x in input().split()]
  ans = int(2e18)
  for i in a:
    suma += i
  for i in b:
    sumb += i
  for i in range(n):
    ans = min(ans, suma + b[i] * n)
    ans = min(ans, sumb + a[i] * n)
  print(ans)



t = int(input())
for _ in range(t):
  Solve()
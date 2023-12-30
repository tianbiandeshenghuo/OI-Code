def Solve():
  n = int(input())
  a1, e1 = [int(x) for x in input().split()]
  flag = 0
  for i in range(1, n):
    a, e = [int(x) for x in input().split()]
    if (a >= a1 and e >= e1):
      flag = 1
  if (flag):
    print(-1)
  else:
    print(a1)

t = int(input())
for _ in range(t):
  Solve()
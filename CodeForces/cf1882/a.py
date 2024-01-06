def Solve():
  n = int(input())
  a = [int(x) for x in input().split()]
  cnt = 1
  for i in a:
    if (cnt == i):
      cnt += 1
    cnt += 1
  print(cnt - 1);

t = int(input())
for _ in range(t):
  Solve()
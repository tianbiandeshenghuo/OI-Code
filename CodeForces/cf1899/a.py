def Solve():
  if (int(input()) % 3):
    print("First")
  else:
    print("Second")

t = int(input())
for _ in range(t):
  Solve()
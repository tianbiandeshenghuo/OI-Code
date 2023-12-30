
def Solve():
  n = int(input())
  if (n <= 6):
    print("NO")
    return 
  x = 1
  y = 2
  z = 4
  z += n - 7
  if (z % 3 == 0):
    z -= 2
    y += 2
  if (y % 3 == 0 or z % 3 == 0 or y == z):
    print("NO")
  else:
    print("YES")
    print(x, y, z)

t = int(input())
for _ in range(t):
  Solve()
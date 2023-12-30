import math as ma

def jl(x, y, dx, dy):
  return ma.sqrt((x - dx) * (x - dx) + (y - dy) * (y - dy))

def Solve():
  px, py = [int(x) for x in input().split()]
  ax, ay = [int(x) for x in input().split()]
  bx, by = [int(x) for x in input().split()]
  mx = (ax + bx) / 2
  my = (ay + by) / 2
  ans = 1e9
  ans = min(ans, max(jl(px, py, ax, ay), jl(ax, ay, 0, 0)))
  ans = min(ans, max(jl(px, py, bx, by), jl(bx, by, 0, 0)))
  ans = min(ans, max({jl(px, py, ax, ay), jl(0, 0, bx, by), jl(ax, ay, mx, my), jl(bx, by, mx, my)}))
  ans = min(ans, max({jl(px, py, bx, by), jl(0, 0, ax, ay), jl(ax, ay, mx, my), jl(bx, by, mx, my)}))
  print(ans)


t = int(input())
for _ in range(t):
  Solve()
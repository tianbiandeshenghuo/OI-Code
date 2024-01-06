def paint_dominoes(n, m, grid):
    row_counts = [0] * n  # 每一行的黑色格子数量
    col_counts = [0] * m  # 每一列的黑色格子数量

    dominoes = []
    for i in range(n):
        for j in range(m):
            if grid[i][j] != '.':
                dominoes.append((i, j))

    for x, y in dominoes:
        row_counts[x] += 1
        col_counts[y] += 1

    beautiful = True
    result = [['.'] * m for _ in range(n)]  # 存储绘制结果的矩阵
    for i in range(n):
        for j in range(m):
            if (row_counts[i] + col_counts[j]) % 2 == 0:
                result[i][j] = '.'  # 格子未被覆盖
            else:
                result[i][j] = '*'  # 格子涂成黑色

            # 检查所有行和列的黑色格子数量是否相等
            if row_counts[i] != col_counts[j]:
                beautiful = False

    if not beautiful:
        print(-1)
    else:
        for i in range(n):
            print(''.join(result[i]))


t = int(input())  # 测试用例的数量

for _ in range(t):
    n, m = map(int, input().split())  # 棋盘的行数和列数

    grid = []
    for _ in range(n):
        row = input().strip()  # 棋盘每行的描述字符
        grid.append(row)

    # 绘制美丽的画或判断是否不可能
    paint_dominoes(n, m, grid)

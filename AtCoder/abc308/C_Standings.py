import operator
n = int(input())
class Node:
    def __init__(self, id, v):
        self.id = id
        self.v = v

ls = []
for i in range(n):
    x, y = map(int, input().split())
    ls.append(Node(i, x / (x + y)))

ls.sort(key=operator.attrgetter("v"), reverse=True)

for i in ls:
    print(i.id + 1, end = " ");
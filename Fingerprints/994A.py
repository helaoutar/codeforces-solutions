F = lambda:map(int, input().split())

F()
a = F()
b = list(F())
d = []

for c in a:
  if c in b:
    d.append(c)

print(*d, ' ')
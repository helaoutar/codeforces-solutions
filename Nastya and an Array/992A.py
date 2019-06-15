F = lambda:map(int, input().split())

F()
a = F()
t = set()

for b in a:
  if b != 0:
    t.add(b)

print(len(list(t)))
a = int(input())
b = []

for i in range(a):
  b.append(input())

b = sorted(b, key = lambda x:len(x))

if all(b[i] in b[i+1] for i in range(len(b) - 1)):
  print('YES')
  print(*b, sep='\n')
else:
  print('NO')
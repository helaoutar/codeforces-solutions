a = input()
b = 'No'

a = '.' + a + '.'

for i in range(1, len(a) - 1):
  if ''.join(sorted(a[i-1 : i+2])) == 'ABC':
    b = 'Yes'

print(b)
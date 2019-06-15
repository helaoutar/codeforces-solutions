def reverse(n):
  for i in range(1, n + 1):
    if n % i == 0:
      yield i

a=reverse(int(input()))
b=input()

for i in a:
  b = b[i-1::-1] + b[i:]

print(b)
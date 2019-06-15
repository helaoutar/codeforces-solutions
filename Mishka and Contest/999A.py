def gen(a, k):
  for i in a:
    if i <= k:
      yield k
    else:
      return

F=lambda:map(int,input().split())
n,k=F()
a=list(F())

print(len([i for i in gen(a, k)]) + (len([i for i in gen(a[::-1], k)]) if any(t > k for t in a) else 0 ))
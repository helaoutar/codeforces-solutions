F = lambda:map(int, input().split())
F()
a = list(F())

print(len([x for (x, y) in zip([0, *a], [*a, 0]) if x >= y]), "\n", *[x for (x, y) in zip([0, *a], [*a, 0]) if x >= y])
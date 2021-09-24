dicc = {"R":"S", "B":"K", "L":"H"}

a = input()

n = len(a)

i = 0
while i < n:
  if (i < n - 2 and a[i] != a[i + 1] and a[i + 1] != a[i + 2] and a[i + 2] != a[i]):
    print("C", end = ""),
    i += 3
  else:
    print(dicc[a[i]], end = ""),
    i += 1

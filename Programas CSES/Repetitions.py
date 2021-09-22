a = input()

j = 1
k = 1

for i in range(1, len(a)):
  if a[i] == a[i - 1]:
    k += 1

    if i == len(a) - 1:

      if k > j:

        j = k
  else:
    if k > j:

      j = k

    k = 1

print(j)

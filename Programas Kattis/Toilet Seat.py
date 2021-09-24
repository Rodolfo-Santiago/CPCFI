a = input()

n = len(a)

count1 = 0
count2 = 0
count3 = 0

for i in range(1, n):
  if (i == 1 and a[i - 1] == "D"):
    count1 += 1
  elif (a[i] == "D"):
    count1 += 2

for i in range(1, n):
  if (i == 1 and a[i - 1] == "U"):
    count2 += 1
  elif (a[i] == "U"):
    count2 += 2
    
for i in range(1, n):
  if (a[i - 1] != a[i]):
    count3 += 1

print(count1)
print(count2)
print(count3)

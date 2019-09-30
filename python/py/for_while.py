# -*- coding: utf-8 -*-

# Basic For

for n in range(1, 10+1):
    print (n)

# Basic While

x = 1
while x <= 3:
    print(x)
    x += 1

# Basic While

x = 10
while x > 0:
    print(x)
    x -= 1

# While with break

x = 1
while x > 0:
    x = int(input("Enter a value: "))
    if x == 1:
        break

# While with if

x = 1
total = 0
while x > 0:
    x = int(input("Enter a value: "))
    if x < 10:
        total = (x+total)
print("The sum of the values of X is %d" %total)

# While with break and continue

x = 1
total = 0
while x > 0:
    x = int(input("Enter a value: "))
    if x == 1:
        break
    if x < 10:
        continue
print("The sum of the values of X is %d" %total)
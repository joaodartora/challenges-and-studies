# -*- coding: utf-8 -*-

# Basic types of lists

L = [] # Dynamic allocation
Z = [15,8,9] # Static allocation

print (Z[0])
print (Z[2])

# Basic list example

grades = [6,7,5,8,9]
total = 0
for n in range (0,5):
    total += grades[n]
mean = float(total)/5
print("The average grade is %.2f" %mean)

# List with input

numbers = [0,0,0,0,0]
for i in range (0,5):
    numbers[i] = int(input("Number %d: " %(i+1)))
print(numbers)

# List Copying

L = [1,2,3,4,5]
print(L)

V = L # Works as a pointer
print(V)

V[0] = 6
print (V)
print (L)

# Adding elements to a list

F = []
F.append("a")
print(F)

F.append("b")
print(F)

F.append("c")
print(F)

# Adding elements to a list with input and while

X = []
num = int(input("Enter a number: "))
while num != 0:
    X.append(num)
    num = int(input("Enter a number: "))
print (X)

# Merging 2 lists into a third list

X = []
Y = []
num_x = int(input("Enter a number to list X: "))
while num_x != 0:
    X.append(num_x)
    num_x = int(input("Enter a number to list X: "))

num_y = int(input("Enter a number to list Y: "))
while num_y != 0:
    X.append(num_y)
    num_y = int(input("Enter a number to list Y: "))

Z = X + Y
print(Z)

# Using while with list size


Z = [1,2,3,4,5,6,7,8,9]
x = 0
while x < len(Z):
    x += 1
print(x)
# -*- coding: utf-8 -*-

# Simple If

a = int(input("Value A: "))
b = int(input("Value B: "))

if a > b:
    print ("'A' is bigger!")
if b > a:
    print ("'B' is bigger!")

# If - Else

a = int(input("Value A: "))
b = int(input("Value B: "))

if a > b:
    print ("'A' is bigger!")
else:
    print ("'B' is bigger!")

# Double If - Else

a = int(input("Value A: "))
b = int(input("Value B: "))

if a > b:
    print ("'A' is bigger!")
if b > a:
    print ("'B' is bigger!")
else:
    print ("The values are the same!")

#Exercicio If - Else If - Else

a = int(input("Value A: "))
b = int(input("Value B: "))

if a > b:
    print ("'A' is bigger!")
elif b > a:
    print ("'B' is bigger!")
else:
    print ("The values are the same!")
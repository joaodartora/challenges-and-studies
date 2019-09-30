# -*- coding: utf-8 -*-

# Simple function to print the sum of 2 numbers

def simple_sum(a,b):
    print(a + b)
    
simple_sum(2,9)
simple_sum(7,8)
simple_sum(10,15)

# Simple function to sum 2 numbers

def simple_sum(a,b):
    return(a + b)

print(simple_sum(2,9))

# Function to verify if a number is pair

def is_pair(x):
    return (x % 2 == 0)
  
print(is_pair(2))
print(is_pair(3))

# Using a function inside another function

def is_pair(x):
    return (x % 2 == 0)

def even_or_odd(x):
    if is_pair(x):
        return "pair"
    else:
        return "odd"
      
print(even_or_odd(4))
print(even_or_odd(5))

# Function to search for a value into a list

def search(list, value):
    for x,e in enumerate(list):
        if e == value:
            return x
    return None
    
L = [10,20,25,30]

print(search(L,25))
print(search(L,27))

# Function to calculate the mean of all elements on a list

L = [10,20,25,30]
def simple_sum(L):
    total = 0
    for e in L:
        total += e
        return total
      
def mean(L):
    return (simple_sum(L) / len(L))

print(mean(L))

# Function to print traces below the name of the course

course = "biomedical informatics"
def print_course():
    print(course)
    print("-" * len(course))
print_course()

# Function to change a value locally on a function

a = 5

def change_and_print():
    a = 7
    print ("'A' inside function: %d" %a)
    
print ("'A' before changing: %d" %a)
change_and_print()
print ("'A' after changing: %d" %a)

# Function to change a value globally on a function

a = 5
def change_and_print():
    global a
    a = 7
    print ("'A' inside function: %d" %a)
    
print ("'A' before changing: %d" %a)
change_and_print()
print ("'A' after changing: %d" %a)

# Function to print the factorial of a number

def factorial(n):
    if n == 0 or n == 1:
        return 1
    else:
        return n * factorial(n - 1)
    
print(factorial(5))

# Function passing default parameters

def trace(n = 40, character = "-"):
    print(character * n)
    
trace()
trace(character = "*")
trace(10)
trace(character = "?")

# Packing parameters

def simple_sum(a,b):
    print(a + b)
    
L = [2,3]
simple_sum(*L)

# Unpacking parameters

def simple_sum(*args):
    s = 0
    for x in args:
        s += x
        return s
print(simple_sum(1,2))
print(simple_sum(2))
print(simple_sum(5,6,7,8))
print(simple_sum(9,10,20,30,40))
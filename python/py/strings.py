# -*- coding: utf-8 -*-

# Printing a position of the string

s = "hello world"
print(s[0])

# Replacing a position of the string

s[0] = "a"

# Transforming a string into a list

l = list("hello world")
print (l)

# Transforming a list of chars into a string, separating with a empty space

l = "".join(l)
print (l)

# Checking if a string starts with other string

name = "Joao Dartora"

print(name.startswith("Joao"))
print(name.startswith("Dartora"))

# Changing the case of the entire string

phrase = "How much wood would a woodchuck chuck if a woodchuck could chuck wood?"

print(phrase.lower())
print(phrase.upper())

# Check if the string is on the variable

"would" in phrase

# Check if the string is not on the variable

"chuck" not in phrase

# Check if the string is in any part of the variable

"odchuck" in phrase

# Check if the string is in any part of the variable, with case sensitive

"odChuck" in phrase

# Count the number of elements inside a string

tongueTwister = "Can you can a can as a canner can can a can?"

print(tongueTwister.count("canner"))
print(tongueTwister.count("can"))
print(tongueTwister.count("tiger"))

# Finds the first incidence of the sought element

f = "hello world"
f.find("ll")

# If not find, returns -1

f.find("ok")

# Find rightmost element

s = "hello world"
s.rfind("d")

# Search substring from index

tongueTwister = "Can you can a can as a canner can can a can?"
tongueTwister.find("can",9)

# Search substring in a interval

tongueTwister.find("canner",0,42)
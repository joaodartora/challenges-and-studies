# -*- coding: utf-8 -*-

# Reading full file as a single string

arc = open('testing.txt', "r")
x = arc.read()
arc.close()
x

# Reading full file as a list of strings

arc = open('testing.txt', "r")
x = arc.readlines()
arc.close()
x

# Replacing file contents

arc = open('testing.txt', "w")
arc.write("Dartora")
arc.close()
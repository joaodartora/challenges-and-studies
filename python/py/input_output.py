# -*- coding: utf-8 -*-

# Basic Input

x = input("Enter a number: ")
print(x)

# Input forcing string

name = input("Enter your name: ")
print ("Hello, %s!" %name)

# Handle data type on reading, calculating BMI (Body Mass Index)

weight = float(input("Enter weight: "))
height = float(input("Enter height: "))
bmi = weight/(height*height)
print("The BMI is: %.2f" %bmi)

# Handle data type on exit, calculating BMI (Body Mass Index)

weight = input("Enter weight: ")
height = input("Enter height: ")
bmi = float(weight)/(float(height)*float(height))
print("The BMI is: %.2f" %bmi)

# Calculation of lifetime lost by smoked cigarette

cigarette_day = int(input("How many cigarettes do you smoke per day?"))
years = int(input("How long have you smoked (in years)?"))
smoked_cigarettes = (years * 365) * cigarette_day
days_lost = (smoked_cigarettes * 10) / 1440
print ("You lost %d days on total" %days_lost)
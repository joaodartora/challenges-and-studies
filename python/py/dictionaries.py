# -*- coding: utf-8 -*-

# Assign values to the table dictionary

table = { "Lettuce": 0.45,
           "Potato": 1.20,
           "Tomato": 2.30,
           "Bean": 1.50}
print(table)

# Search for value in brackets

table["Lettuce"]

# Prints the value atribbuted to the key

print(table["Tomato"])

# Changing key value

table["Tomato"] = 2.50
print (table)

# Concatenate element in dictionary

table["Banana"] = 0.90
print(table)

# If element does not exist, prints error

print(table["Mango"])

# Search if an element is inside dictionary

print ("Tomato" in table)
print ("Mango" in table)

# Search if an element is not inside dictionary

print ("Tomato" not in table)
print ("Mango" not in table)

# Prints every key in dictionary

print (table.keys())

# Prints every value in dictionary

print (table.values())

# Example to check if a value is inside the dictionary

while True:
    product = input("Enter the name of the product. Enter 'end' to end")
    if product.lower() == 'end':
                    break
    if product in table:
                    print ("Price %5.2f" % table[product])
                    break
    if product not in table:
                    include = input ("Product not found, would you like to include? Yes or no")
                    if include.lower() == "yes":
                        productValue = input("What is the value of the product?")
                        table[product] = productValue
                    else:
                        break
    else:
                    print ("Product not found!")

# Delete element from dictionary
 
del table["Tomato"]
print(table)

# Example of multivalued dictionary

stock = { "Lettuce": [1000,0.45],
           "Potato": [750,1.20],
           "Tomato": [500,2.30],
           "Bean": [1500,1.50]}
print(stock)

# Printing multivalued dictionary keys

print(stock.keys())

# Printing multivalued dictionary values

print(stock.values())
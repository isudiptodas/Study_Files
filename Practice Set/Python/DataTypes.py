'''

• No semicolon required
• No need for mentioning data type as 
  python automatically figures it out

• '#' for single line comment
• 3 inverted coma for multiline comment
• Multiple variable assignments with multiple values
• Can assign multiple data types in list (array)

'''

num1 = 5                       # Assigned numbers
num2 = 10
x, y, z = 1, 2, 3              # Assigned multiple variables with multiple values

boolean = True

name = "Sudito "               # Assigned string 

char = '♡'                     # Assigned character
point = 19.5                   # Assigned floating number
new_num = complex(8, 2)        # Assigned complex number

file = [1, 3, 7, "Apple", "Grape", "Oats", '♡', '☆']

print(num1 + num2)            # Printed the sum of variables
print("Hello " +name)         # Printed string with '+' for concatenation
print(x,y,z)
print(boolean)
print(char)
print(point)
print(new_num)                # '\n' for new line
print(file, "\n")

print(type(num1))             # Returns the type of data <class 'int'>
print(type(name))             # Returns the type of data <class 'str'>
print(type(boolean))          # Returns the type of data <class 'bool'>
print(type(char))             # Returns the type of data <class 'str'>
print(type(point))            # Returns the type of data <class 'float'>
print(type(new_num))          # Returns the type of data <class 'complex'>
print(type(file))             # Returns the type of data <class 'list'>
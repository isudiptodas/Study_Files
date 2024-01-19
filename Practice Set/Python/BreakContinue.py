# Take input from user and implement table using for and while loop

i = 1
j = int(input("Enter a number you want to break after : "))

for i in range(15):
    print(i)
    if(i==j):
        break
print("\n")

#_________________________________________________________________________

a = 1
b = int(input("Enter a number you want to skip : "))

while(a<=15):
    if(a==b):
        a = a+1
        continue
    print(a)
    a = a+1
print("\n")
# For loops

array = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

for i in array:                    # For each iteration i will go on each number and print
    print(i, end = " ")
print("\n")
    
#________________________________________________________________________________________________

place = ["New york, Los Angeles, California, Red Mond"]

for x in place:                   # x will iterate on each string 
    print(x, end =" ")
    for index in x:               # index will iterate on each string character
        print(index, end = " ")
print("\n")

#________________________________________________________________________________________________

# Lets print 1 to 15

for a in range(15):
    print(a, end = " ")          # Here it will print from 0 to 14
    print(a + 1, end = " ")      # Now it will print from 1 to 15
print("\n")

#________________________________________________________________________________________________

for y in range(1,8):
    print(y, end =" ")          # Here it will start from 1 and go upto 7
print("\n")

#________________________________________________________________________________________________

'''
In python for loops there are 3 parameters: start, stop and step

Here's is an example : 
'''

for l in range(1, 20, 2):
    print(l, end = " ")
print("\n")   

'''
Here in this program 1 is the start, 20 is the end, 2 is step.
Now the program will go from 1 upto 20 and after every iteration
it will skip 2 numbers.

'''
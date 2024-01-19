# Take input from user and implement table using for and while loop

i = 1
exit = 7

for i in range(15):
    print(i)
    if(i==exit):
        break
print("\n")

#_________________________________________________________________________

a = 1
keep = 9

while(a<=15):
    if(a==keep):
        a = a+1
        continue
    print(a)
    a = a+1
print("\n")
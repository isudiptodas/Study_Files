# if else conditions 

'''
1. On the if else block, we left some spaces in the beginning 
   of the print statement that is called identation. It shows that
   now we're in the particular condition block.

2. The print statement after the else block is not considered as inside the
   condition block because it doesn't have any space or identation.
   
'''

age = int(input("Enter your age : "))

if(age>=18):
    print("You can vote \n")        
else:
    print("You cannot vote \n")
    
print("Exited from condition \n")

#__________________________________________________________________________________

temp = float(input("Enter the temperature : "))

if(temp>=8 and temp<=15):
    print("Weather is good, go out on a date with partner")
elif(temp<=25 and temp>=15):
    print("Go out on a walk")
else:
    print("Turn the A.C on")
# Take input from user and make a basic calculator

num1 = int(input("Enter 1st number : "))
num2 = int(input("Enter 2nd number : "))

print("1.ADD  2.SUBTRACT  3.MULTIPLY  4.DIVIDE")
choice = input("Enter your choice : ")

if choice == '1':
    print(num1 + num2)
    
elif choice == '2':
    print(num1 - num2)
    
elif choice == '3':
    print(num1 * num2)
    
elif choice == '4':
    if num2 == '0':
        print("Cannot divide by")
    else:
        print(num1//num2)
        
else:
    print("Invalid input")
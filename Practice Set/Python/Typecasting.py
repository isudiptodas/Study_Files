
'''
• Typecasting refers to changing a data type into another for example :
  a and b are string so it will concatenate and become a + b which is 510

• But if you add p + q then it will give you 10 as if it was integer.

• On line number 30 in the print of a+p, it will give error because a is a
  string and p is a number.

• On line 31 we used typecasting means the string a and b first converted into int
  then they got added.
 
• On line 31 we have done explicit type conversion and on line 36 it was done by
  python itself which is called implicit conversion.
  
'''
a = "5"
b = "10"

x = "Hi"
y = "Hello"

p = 7
q = 3

print(x+y)            # Here it will give output HiHello
print(a+b)            # Here it will give 510 
print(p+q)            # Here it will give 10
print(a+p)            # Here it will give error
print(int(a)+int(b))  # Here it will print 15

num1 = 19.5
num2 = 7

print(num1+num2)      # Here the output will be 26.5
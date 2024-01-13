'''
• On the 1st print statement there it will print only 
  "space" as it indicates 0-5 (O based indexing)

• Similarly on line 24 it will print only "pac" 
• On line 25 it will print the length of name

• The rstrip() method only removes from the end and not from 
  the front of the string
  
• The replace() method replaces all occurrence of particular word

• capitalize() method captalizes the first alphabet of the string
• count() counts the occurrence of a particular word.

'''

name = "Space is awesome"
sign = "We are in milky way !!!!!"
capital = "i am a student"
occurrence = "Hare krishna, hare krishna, krishna krishna, hare hare"

print(name[0:5]) 
print(name[1:4])
print(len(name))    
print(name.upper())              # upper() converts into uppercase
print(name.lower())              # lower() converts into lowercase
print(sign.rstrip("!"))          # Removes "!" from sign
print(name.replace("Space", "Astronomy"))  
print(capital.capitalize())
print(occurrence.count("krishna"))
# Que.1 Create a program that ask the user to enter the name and their age.
#       print out a message address to them that tells them the year that they will turn 100 year old.

name = input("Enter your name: ")
age = input("Enter your age: ")

current_year = 2023
age_left = 100 - int(age)
hundredth_year = 2023 + int(age_left)
print("Year in which ", name, " will be 100 year old: ", hundredth_year)

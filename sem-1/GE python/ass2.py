
# Que.2 ask the user for a number depending on wether the number is even or odd, print out an appropriate message to the user.



num = int(input("Enter a number: "))
if num%2 == 0:
  print(num,"is Even.")
elif num%2 != 0:
  print(num,"is odd.")
else:
  print("you have entered invalid number.")
  



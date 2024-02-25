# Que.3 Take a list 'a' and write a program that print out all the element of the list that are less than 20
#       a = [1,1,2,3,5,8,13,21,34,55,89]
#       can you make a new list that has all the elements less than 5 form this list in it and print out this new list. 


a = [1,1,2,3,5,8,13,21,34,55,89]

for i in a:
    if i < 20:
        print(i)
        a = [1,1,2,3,5,8,13,21,34,55,89]
        b = []

for i in a:
    if i < 5:
        b.append(i)
print(b)








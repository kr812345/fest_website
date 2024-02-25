# # # import pandas as pd

# # # list1 = ["hi","Hello","World",23,49]

# # # #print(list1[1])

# # # #series1 = pd.Series(list1,[1,3,2,4,2],name = "Demo")
# # # #print(series1)

# # # # d = {'a':1,'b':2,'c':3}
# # # # d2 = {'x':8,"y":9,'z':10}
# # # # ser = pd.Series(d)
# # # # ser2 = pd.Series(d2)
# # # # # sere = ser.loc()
# # # # print(ser)
# # # # print(ser2)
# # # # srapp = ser.append(ser2,index = [1,2,3,4,5,6])
# # # # print(srapp)

# # # # addn = ser.add(4)
# # # # appnd = addn.append(d2)
# # # # print(appnd)

# # # s1 = pd.Series([9,8,7,6,5])
# # # s2 = pd.Series([4,3,2,1])

# # # a = s1._append(s2)
# # # print(a)

# # l4 = [1,2,3,4]
# # # del l4[2]
# # print(l4[1:3])

# #string palindrome

# # s1 = "huhuhuhuh"
# # s1 = list(s1)
# # s2 = []
# # n = len(s1)
# # for i in range(0,n):
# #     s1[i] = s1[-i-1]
# # if (s1 == s1):
# #     print("This is a Palindrome.")    
# #     pass
# # else:
# #     print("This is not a Palindrome.")

# def palindrome_check(s):
#     return s == s[::-1]
# s = "huhuhuhuh"
# ans = palindrome_check(s)
# if ans:
#     print("this is a palindrome.")
# else:
#     print("This is not a palindrome.")


import pandas as pd
l1 = [1,2,3,4,5]
l2 = [6,7,8,9,0]
l3 = l1 + l2 
l4 = pd.Series(l3)
df = pd.DataFrame(l4)
print(df)
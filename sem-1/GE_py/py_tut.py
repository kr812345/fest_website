# #a = range(5)
# b = b'byter'
# #print(type(a))
# print(b)
# c = 15//4
# print(c)
# a=1
# a = a >> 4
# print(a)
# a = 30
# b = 2
# print(((a % 2) == 0) ^ ((b % 2) != 0))

t1 = 1,2,3,4,5
t2 = 6,7.9,60,9
t3 = list(t1 + t2)
print(t3)
# l3.reverse()
# l3.append(0)
# l3.reverse()
# del l3[0]
# # l4 = l3[-3:-1]
# print(l3)
# l3.append("hi")
# print(l3)
t3[4] = 11.1
# print(l3)
i = 0
while i < len(t3):
    print("list[",i,"] =", t3[i])
    i+=1
print(min(t3))
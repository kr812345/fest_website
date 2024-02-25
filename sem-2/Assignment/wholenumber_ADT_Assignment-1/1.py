def get_zero():
    return 0

def is_zero(x):
    if x == 0:
        return True
    else:
        return False

def add(x, y):
    if x + y < 0:
        return 0
    elif x + y > pow(2, 31) - 1: 
        return pow(2, 31) - 1
    else:
        return x + y

def subtract(x, y):
    if x - y < 0:
        return 0
    elif x - y > pow(2, 31) - 1: 
        return pow(2, 31) - 1
    else:
        return x - y

def divide(x, y):
    if x <= 0 or y <= 0:
        return 0
    elif x // y > pow(2, 31) - 1: 
        return pow(2, 31) - 1
    else:
        return x // y

def successor(x):
    if x + 1 < 0:
        return 0
    elif x + 1 > pow(2, 31) - 1: 
        return pow(2, 31) - 1
    else:
        return x + 1

def predecessor(x):
    if x - 1 < 0:
        return 0
    elif x - 1 > pow(2, 31) - 1: 
        return pow(2, 31) - 1
    else:
        return x - 1

def equal(x, y):
    if x == y:
        return True
    else:
        return False

x = 6
y = 4
print("Get Zero:", get_zero())
print("Is Zero:", is_zero(x))
print("add (", x, ",", y, "):", add(x, y))
print("subtract (", x, ",", y, "):", subtract(x, y))
print("divide (", x, ",", y, "):", divide(x, y))
print("successor (", y, "):", successor(y))
print("predecessor (", x, "):", predecessor(x))
print("equal (", x, ",", y, "):", equal(x, y))

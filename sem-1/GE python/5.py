# using Reversal method
def is_palindrome_using_reverse(s):
   
    reversed_string = s[::-1]

    
    if s == reversed_string:
        return True
    else:
        return False

#  using loops
def is_palindrome_using_loop(s):
    
    s = s.lower()

    
    s = ''.join(e for e in s if e.isalnum())

    
    start = 0
    end = len(s) - 1

    
    while start < end:
        if s[start] != s[end]:
            return False
        start += 1
        end -= 1

    return True


user_string = input("Enter a string: ")


if is_palindrome_using_reverse(user_string):
    print(f'"{user_string}" is a palindrome (using string reversal).')
else:
    print(f'"{user_string}" is not a palindrome (using string reversal).')

if is_palindrome_using_loop(user_string):
    print(f'"{user_string}" is a palindrome (using loops).')
else:
    print(f'"{user_string}" is not a palindrome (using loops).')


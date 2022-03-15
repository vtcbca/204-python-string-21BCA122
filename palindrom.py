s=input("enter any word for checking palindrome or not:")
s2=s[::-1]
print(s2)
if s==s2:
    print("string is palindrome")
else:
    print("string is not palindrom")

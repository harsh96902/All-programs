num = int(input("Enter any num: "))

i = num
reverse = 0
while(i != 0):
    digit = i % 10
    reverse = (reverse*10) + digit
    i = i//10
if(reverse == num):
    print("number is a palindrome")
else:
    print("Number is not palindrome")    
# print(reverse)    
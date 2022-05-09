# Program to check whether the number is a prime or not
num = int(input("Enter any num : "))
n = 0
for i in range (2,num):
    if(num%i == 0):
        print("Number is not a prime number")
        n =  1
        break
    
if(n != 1):
    print("Number is a prime number")    

print("enter the first number")
num1=int(input())
print("enter the second number")
num2=int(input())
print("what do you want ?+,-,*,/")
num3=input()
if num3=="+":
    addition=num1+num2
    print(addition)
elif num3=="-":
    subtraction=num1-num2
    print(subtraction)
elif num3=="*":
    mul=num1*num2
    print(mul)
elif num3=="/":
    div=num1/num2
    print(div)
else:
    print("error")   









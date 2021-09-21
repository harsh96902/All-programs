print("enter the first number")
num1=int(input())
print("enter the second number")
num2=int(input())
print("choose one :+,-,*,/")
num3=input()
# for print wrong value
if num1==2 and num2==3 and num3=="+":
    print("6")
elif num1==4 and num2==6 and num3=="*":
    print("20")    
elif num3=="+":
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
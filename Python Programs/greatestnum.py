a = int(input("enter the value of a:"))
b = int(input("enter the value of b:"))
c = int(input("enter the value of c:"))
if (a>c):
    if (a>b):
        print("a is the greatest")
elif (b>a):
    if (b>c):
        print("b is the greatest")
else:
    print("c is the greatest")
l1 = [7,8,4,76,84,5,87,3,75]
for item in l1:
    for i in range(2,item):
        if item%i==0:
            break
        else:            
            print(item,end=" ")
            break
        
l = int(input("Enter the lower no.:"))
u = int(input("Enter the upper no.:"))
for num in range(l,u+1):
    for i in range(2,num):
        if(num%i==0):
            break
        else:
            print(num,end=" ")
            break
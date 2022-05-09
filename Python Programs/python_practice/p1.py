num = int(input("Enter any num:"))
sum =0
k =0
for i in range(0,num,1):
    j = i-1
    if(j<0):
        j = 0
    sum =  i+j        
    print("current number :",i,"previous number is: ",j," sum :",sum,"\n")



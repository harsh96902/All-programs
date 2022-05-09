num = int(input("Enter any num : "))

# for i in range(1,num+1,1):
#     for j in range(1,i+1,1):
#         print(i,end=" ")
#     print("\n")

#  * pyramid--->
for i in range(num,0,-1):
    for j in range(0,i+1,1):
        print("*",end=" ")
    print("\n")

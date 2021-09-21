n = int(input("enter no. of rows"))
print("enter 1 or 0")
bool_var = int(input("1 is for true and 0 is for  false"))
# if(bool_var==1):
#     i=0
#     while(i<n):
#         # if(i<n):
#         i=i+1
#         print("*"*i)     #this code is written by me
# if(bool_var==0):
#     i=n+1
#     while(i>1):
#         # if(i>1):
#         i=i-1
#         print("*"*i)


# And we can run this by using "for" loop

if (bool_var==1):
    for i in range(0,n+1):
        print("*"*i)

if (bool_var==0):
    for i in range(n,0,-1):
        print("*"*i)


        
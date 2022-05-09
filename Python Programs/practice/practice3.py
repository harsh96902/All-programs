# num = int(input("Enter any num : "))
# sum  = 1
# prev = 0
# next = 1
# for i in range(0, 100):
    
#     prev = sum + next
#     sum = next
#     next = prev
#     print(sum," ")

# Recursive fibonacci series-->
def recursivefibonacci(n):
    if(n<=1):
        return 1
    else:
        return recursivefibonacci(n-1) + recursivefibonacci(n-2)

for i in range(0,10):
    print(recursivefibonacci(i))            
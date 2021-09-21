# "recursion function" means using function inside any funnction 
number = int(input("enter the number"))
def factorial(n):
    fact = 1
    for i in range(n):
        fact = fact * (i+1)
        
    print("this is iterative method ",fact)
factorial(number) 

# Now this is recursive method....

def factorial_recursive(n):
    if n ==1:
        return 1
    else:
        return n * factorial_recursive(n-1)   
print("this is recursive method",factorial_recursive(number))

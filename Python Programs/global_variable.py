a = 5 # "global variable" means if will be defined for all the functions  

def function1(n):
    a = 4  # local variable (define for private function)
    b = 6  # local variable 
    print(a , b)

    print("hello guys",n)
function1("How are you")
print(a)


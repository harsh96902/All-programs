# "Global keyword" means changing the value of global variable
a = 20
def harry():
    b = 40
    global a  # global keyword
    a = a+10
    c = a+b
    print(c)
    def rohan(): 
        global b  #global keyword will not work here because b is inside any private function
        b = b+10
    print(b)
    rohan()
harry()            

class Employee:
    increment = 1.5
    def __init__(self , fname,lname,salary): # constructor
        self.fname = fname  
        self.lname = lname   # instance variable of self like fname,lname,salary
        self.salary = salary

    @staticmethod  # we can use static method if we don't want to pass the
    # class and self argument and we want to pass our own argu then we can use this method
    def isopen(day):
        if day=="sunday":
            return False
        else:
            return True

print(Employee.isopen("sun"))
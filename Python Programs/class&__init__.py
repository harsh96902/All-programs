class Employee:
    # using __init__() function 
    def __init__(self,aname ,asalary, arole):  # constructor
        self.name = aname 
        self.salary = asalary
        self.role = arole
    def printdetails(self):
        return f"Name is {self.name},salary is {self.salary} and role is {self.role}"
harry = Employee("Harry",500,"Instructor")

print(harry.printdetails())

              

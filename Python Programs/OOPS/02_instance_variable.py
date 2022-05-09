class Employee:
    increment = 1.5
    def __init__(self , fname,lname,salary): # constructor
        self.fname = fname  
        self.lname = lname   # instance variable of self like fname,lname,salary
        self.salary = salary

    # suppose we want to increase the salary of employee
    def increases(self):
        self.salary = self.salary * Employee.increment     

harry = Employee("harry","sir",399)  # these are our objects
rohan = Employee("rohan" ,"das",392)

print(harry.salary)

harry.increases()
# print(harry.__dict__) # instance variable of harry
# print(Employee.__dict__)  # instance variable of employee

print(harry.salary)

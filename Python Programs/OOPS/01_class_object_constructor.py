class Employee:
    def __init__(self , fname,lname,salary): # constructor
        self.fname = fname
        self.lname = lname
        self.salary = salary

harry = Employee("harry","sir",399)  # these are our objects
rohan = Employee("rohan" ,"das",392)
# harry.fname = "harry"
# harry.lname = "sir"
# harry.salary = 3999

# rohan.fname = "rohan"
# rohan.lname =  "das"
# rohan.salary = 3933

print(rohan.salary , harry.salary)


class student:
    def printdetails(self):
        return f"Name of the student is {self.name},section is {self.sec} and roll no. is {self.roll}"
harry = student()
anuj = student()

harry.name = "Harry"
harry.sec = "A"
harry.roll = 201

anuj.name = "Anuj"
anuj.sec = "B"
anuj.roll = 112
print(harry.printdetails())
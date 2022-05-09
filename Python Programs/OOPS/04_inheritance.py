# INHERITANCE --> Inheritance allows us to define a class that inherits all
# the methods and properties from another class

class father:
    def haircolor(self):
        return 'black'

class mother:
    def haircolor(self):
        return 'brown'
    def height(self):
        return 'tall'    

class child(father, mother):
    def haircolor(self):
        return super().haircolor()
    def height(self):
        return super().height()                                           

# Mother = mother()
Child = child()
print(Child.haircolor())
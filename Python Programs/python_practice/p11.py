class Trainee:

    __counter = 1999
    bonus_pay = 1000
    
    def __init__ (self,marks):
        self.counter += 1
        self.emp_id=Trainee.__counter
        self.marks = marks

    @staticmethod
    def get_counter ():
        return Trainee._counter
#Line 2
    def check_bonus_eligibility (self):
        if (self.marks>=90):
            print('Trainee is eligible for a bonus of',Trainee.bonus_pay)
        else:
            print('Trainee is eligible for a bonus of', Trainee.bonus_pay//2)

trainee_ref1=Trainee(80)
trainee_ref1.check_bonus_eligibility ()
trainee_ref2=Trainee(90)
trainee_ref2.check_bonus_eligibility()
print('Total number of trainees are',Trainee.get_counter()-2000)  #Line 3

# Line 1: self counter+=1
#
# Line 2: self counter

#Line 3: Trainee get counter-2000
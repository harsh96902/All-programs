import random
print("Welcome to the Snake, Water , Gun Game")
a = {"s":"snake","w":"water","g":"gun"}
list1 = ["water","gun"]
list2 = ["snake","water"]
list3 = ["snake","gun"]
for key,value in a.items():
    print("press",key,"for",value,"\n",end="")
computer_point=0
human_point=0    

i=0
while(i<11):
    x = input("choose anyone out of s,g,w\n")
    i=i+1
    if (x=="s"):
        comp_choose=random.choice(list1)
        print("computer choose",comp_choose)
        if(comp_choose=="water"):
            human_point=human_point+1
            print("you win")
            print(f"computer point is:{computer_point} and your point is:{human_point}")
        else:
            computer_point=computer_point+1
            print("you lose")
            print(f"computer point is:{computer_point} and your point is:{human_point}")

    if (x=="w"):
        comp_choose=random.choice(list3)
        print("computer choose",comp_choose)
        if (comp_choose=="gun"):
            human_point=human_point+1
            print("you win")
            print(f"computer point is:{computer_point} and your point is:{human_point}")

        else:
            computer_point=computer_point+1
            print("you lose")
            print(f"computer point is:{computer_point} and your point is:{human_point}")

    if (x=="g"):
        comp_choose=random.choice(list2)
        print("computer choose",comp_choose)
        if(comp_choose=="snake"):
            human_point=human_point+1
            print("you win")
            print(f"computer point is:{computer_point} and your point is:{human_point}")

        else:
            computer_point=computer_point+1
            print("you lose")
            print(f"computer point is:{computer_point} and your point is:{human_point}")
print("computer point is:",computer_point,"\nand your point is:",human_point)                        
if (computer_point>human_point):
    print("computer win")
else:
    print("congratulation you win this game")                








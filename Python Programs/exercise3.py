
n=18
trial=1
print("this is a game of guessing lucky number")
while (trial<=9):
    inp=int(input("guess a number : "))
    if inp>18:
        print("enter a lesser one : ")
    elif inp<18:
        print("enter a greater one : ")      
    else :
        print("congratulation you got the lucky number")
        print("No. of trial used : ",trial)
        break
    print(9-trial,"trial left")
    trial=trial+1

if trial>9:
    print("game over")  
             

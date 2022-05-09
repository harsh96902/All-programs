lower = 2
upper = 100
for i in range(lower , upper + 1):
    n = 0
    for j in range(2 ,(i//2 + 1)):
        if(i%j ==0):
            n = 1
            break
    if(n ==0 and i!= 1):
        print(i," ")
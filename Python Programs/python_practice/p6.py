# input the array
array = list(map(int,input().split(",")))
# add all numbers which do not lie between 5 and 8 input
number1 = sum(array[:array.index(5)]) + sum(array[array.index(8) + 1:])
# numbers lie between 5 and 8
l = array[array.index(5):array.index(8) + 1]
# Initialization the number2
number2 = ""
# concatenate all number present in array 1
for i in l:
   number2 += str(i)
# output: number1 + number2
print(int(number2) + number1)
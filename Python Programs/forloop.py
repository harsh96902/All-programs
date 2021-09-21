# l1=[["mohan",1],["rohan",2],["sonu",3],["rohit",4]]
# for dictionary item we can use
# dict1=dict(l1)
# print(dict1)
# for item , marks in l1:
#     print(item, "and marks is",marks)

 
# quiz solved
l2=[12,33,4,34,11,19,16,17,"harry"]
for item in l2:
    # for taking numeric value only from random list
    if str(item).isnumeric() and item>6:
        print("num greater than 6",item)
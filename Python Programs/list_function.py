# List  functions ---->

# sort(): Sorts the list in ascending order.
# type(list): It returns the class type of an object.
# append(): Adds one element to a list.
# extend(): Adds multiple elements to a list.
# index(): Returns the first appearance of a particular value.
# max(list): It returns an item from the list with a max value.
# min(list): It returns an item from the list with a min value.
# len(list): It gives the overall length of the list.
# clear(): Removes all the elements from the list.
# insert(): Adds a component at the required position.
# count(): Returns the number of elements with the required value.
# pop(): Removes the element at the required position.
# remove(): Removes the primary item with the desired value.
# reverse(): Reverses the order of the list.
# copy():  Returns a duplicate of the list.

list = [3,5,7,4,383,83,378,3,32,23]

list.sort()
list.append(16)
list.extend([2,3,6,22])
a = max(list)
b = min(list)
list.insert(4,77)
c = list.count(3)
print(list)
list.remove(7)
list.pop(3)  # required index
list.reverse()
x = sum(list[:list.index(7)])
print(x)
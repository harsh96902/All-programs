import numpy as np

# Array
array1 = np.array([[2,5,7,8,4],[2,6,46,7,8]]) 
# print(array1.shape)   # for knowing the size of array

# print any unit no. of arrays like by giving size as arguments
array2 = np.zeros(4)
array4 = np.ones((4,5))
array3 = np.zeros((4,6))   # there are two parenthesis bcz when numpy takes arguments
print(array2)              # that should be tuple
array5 = np.empty((5,4))   # this is for creating an empty array

# we can use these numpy function
a = array1*array1
b = array1-array1
c = array1+array1
# print(a)

# Slicing ------------->>
array6 = np.array([4,2,5,7,8,9])
arr = array6[2:5]  # it will print all elements between 2 to 5
arr1 = array6[4]   # it will print any particular element
arr2 = array6[:3]  # it will print all elements form first to 3
arr3 = array6[3:]  # it will print all elements from 3 to last
# print(arr3)


import numpy as np

arr = np.arange(1,5)   # it is used to print array within any range
# print(arr)

arr1 = np.array([2,4,6,3,6,745,7,54,3,6,2,845,3,4,3,2])

# Convert a single array into any matrix order
# print(len(arr1))
a = arr1.reshape(8,2)  # used to convert into matrix order
# print(a)

# arg function in numpy------->
# it will give the index no. acc. to the our statements
b = np.argsort(arr1)   # it will give the sorting index
c = np.argmin(arr1)    # it will give the index of min no.
d = np.argmax(arr1)    # it will give the index of max no.
e = np.argsort(a , axis = 0)   # we can used it to take the index of sorting in row and column separately
print(e)

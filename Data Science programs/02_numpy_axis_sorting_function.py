import numpy as np
from numpy.core.fromnumeric import transpose

# Axis ----functions---->>
arr1 = np.array([[3,5,7],
                [3,5,1]])
arr = arr1.sum(axis = 0)   # this is used for the sum of column wise element
arr2 = arr1.sum(axis = 1)  # this is used for the sum of row wise element
# print(arr2)   

# dot product of two matrix------>>
arr3 = np.array([[3,2,7],
                [2,1,4]])
a = np.dot(arr1, arr3.transpose())
# print(a)

# cross product of two matrix------>>
b = np.cross(arr1, arr3)
print(b)

# print(dir(np))   # to to know the about the whole directory of numpy

# Sorting -------->>
arr4 = np.array([[3,2,7],
                [2,1,4]])
c = np.sort(arr4)  # this is used for sorting
d = np.sort(arr4,axis=0)  # this is used for sorting column wise element
e = np.sort(arr4,axis=0,kind = 'mergesort')  # this is used for sorting by any special kind of method of sorting
# print(d)
             
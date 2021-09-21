import pandas as pd

df = pd.DataFrame([[1,2,54,5,78],[1,2,57,9,5],[5,56,1,2,8],[5,5,3,6,7]])
# print(df)
# Slicing dataframe------>>
a = df.iloc[2,3]  # it is used to print any particular element by passing
                # row and column no. 
b =df.iloc[0:2,0:3]  # it is used to print element within range of R&C
c = df.iloc[1:3,2:4]
# print(b)

# We can change the row and columns name ---->>
df1 = pd.DataFrame([[1,2,54,5,78],[1,2,57,9,5],[5,56,1,2,8]],columns = ['A','B','C','D','E'])
d = df1.shape  # it is used to know about the order of the matrix
print(d)

# We can use so many pandas function on pandasDataFrameDrop.....
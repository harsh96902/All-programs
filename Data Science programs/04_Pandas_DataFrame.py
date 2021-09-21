# Pandas->> It can present data in a way that is suitable for data analysis
#  via its Series and DataFrame data structures.

import pandas as pd

#creating data frame  -->>

df = pd.DataFrame([[1,2,54,5,78],[1,2,57,9,5],[5,56,1,2,8],[5,5,3,6]])
# print(df)

# We can use these functions if we want print head and tail colums and row
a = df.head(2)  # it is used to print first two rows
b = df.tail(2)  # it is used to print from last rows
# print(a)
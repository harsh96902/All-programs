import pandas as pd    

df1 = pd.DataFrame([[12,4,5],[13,5,16],[4,4,6]],columns = ['A','B','C'])

df2 = pd.DataFrame([[2,4,15],[3,5,6],[14,4,36]],columns = ['X','Y','Z'])

df  = pd.merge(df1,df2,right_on='Y',left_on='B')  # for merging two dataframe
# remember that in this case Y or B should be same--
print(df)
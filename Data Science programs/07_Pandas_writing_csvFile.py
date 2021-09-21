import pandas as pd   

df = pd.DataFrame([[1,2,54,5,78],[1,2,57,9,5],[5,56,1,2,8],[5,5,3,6]])

a = df.to_csv('export.csv')  # this is used to create or write csv file

b = df.to_csv('export1.csv',index = False)  #this is used to remove the index and we can edit
# we can use more function by searching to_csv documentry 
print(df.head)

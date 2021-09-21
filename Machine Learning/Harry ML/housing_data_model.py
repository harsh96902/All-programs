# REAL STATE HOUSING PRICE PREDICTION

import pandas as pd

housing = pd.read_csv("housing_data.csv")

# print(housing.head())  # print top 5 rows

# print(housing.info())  # give the info about out data entry

# print(housing['CHAS'].value_counts())   # it will give the count of all values of any particular category data

# print(housing.describe())   # it will describe all our data

import matplotlib.pyplot as plt

housing.hist(bins = 50,figsize = (20,15))  #histogram for our data representing
# print(plt.show())

# TRAIN TEST SPLITTING --------->
from sklearn.model_selection import train_test_split
train_set, test_set = train_test_split(housing , test_size = 0.2,random_state = 42)  #normally use random_state = 42
# print("Rows for testing -> ",len(train_set),"\nRows for training -> ",len(test_set))

# if we want to fix the ratio of any particular values in train_set and test_set
# then we can use stratified shuffle slit
from sklearn.model_selection import StratifiedShuffleSplit
split = StratifiedShuffleSplit(n_splits = 1, test_size = 0.2, random_state = 42)
for train_index, test_index in split.split(housing,housing['CHAS']):
    strat_train_set = housing.loc[train_index]
    strat_test_set = housing.loc[test_index]

# Now we store the copy of strat_train_set in housing data
housing = strat_train_set.copy()    

# print(strat_test_set['CHAS'].value_counts())
# print(strat_train_set['CHAS'].value_counts())

# Now the ratio of 1 and 0 in both train_set and test_set will be same 
# 0    95
# 1     7
# Name: CHAS, dtype: int64
# 0    376
# 1     28
# Name: CHAS, dtype: int64

# LOOKING FOR A CORRELATION--------------->
# if we want to know the strongly affected features availabel of the data

corr_matrix = housing.corr()
rel = corr_matrix['MEDV'].sort_values(ascending=False)
# print(rel)
# MEDV       1.000000
# RM         0.695360     # According to this data RM is the strongly affected feature
# ZN         0.360445     # on which price will have strongly positive correlation
# B          0.333461
# DIS        0.249929
# CHAS       0.175260
# AGE       -0.376955
# RAD       -0.381626
# CRIM      -0.388305
# NOX       -0.427321
# TAX       -0.468536
# INDUS     -0.483725
# PTRATIO   -0.507787
# LSTAT     -0.737663

# if we want to plot the graph of correlation feature-->
from pandas.plotting import scatter_matrix
attributes = ["MEDV","RM","ZN","LSTAT"]
# print(scatter_matrix(housing[attributes] , figsize = (12,8)))

# TRY OUT THE ATTRIBUTES COMBINATION------------>
# It means if want to add new feature by the combination of two or more attributes then -->

housing["TAXRM"] = housing["TAX"]/housing["RM"]
# TAXRM has been added in our housing data
# print(housing.head())
# WE can check the correlation of this feeature
# corr_matrix = housing.corr()
# rel = corr_matrix['MEDV'].sort_values(ascending=False)
# print(rel)

# Plotting graph for TAXRM-->
plot = housing.plot(kind ="scatter" , x = "TAXRM" , y = "MEDV",alpha = 0.8)   # alpha is used for the darkness of point of our graph
# print(plot)

# MISSING DATA------------>
# To take care of missing attributes, you have three options:\n",
    #     1. Get rid of the missing data points\n",  (rid of data means, removove the data)
    #     2. Get rid of the whole attribute\n",
    #     3. Set the value to some value(0, mean or median)"
    # First two option can affect our prediction so, we will use third option

# option 1-->
a = housing.dropna(subset=["RM"])    # oringinal dataframe will be unchanged
# print(a.shape)  # we can check the shape and size of RM

# Option 2-->
b = housing.drop("RM",axis = 1) # Note that there will be no "RM" column
# original housing dataframe will be unchanged
# if we want to change then use housing variable instead of a and b
# print(b)

#  Option 3 -->

median = housing["RM"].median()
c = housing["RM"].fillna(median)    # Note that original dataframe will not be changed
# print(c)

# Now we will do the third option using sklearn and fit into our original dataframe
# print(housing.info())
from sklearn.impute import SimpleImputer
imputer = SimpleImputer(strategy="median")
imputer.fit(housing)
x = imputer.transform(housing)   # this is a numpy array

# we will create a new dataframe for transformed dataset in which all missing values will be fit by the median values
housing_tr = pd.DataFrame(x , columns = housing.columns)
# print(housing_tr["RM"].describe())  

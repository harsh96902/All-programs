# Importing the libraries----->>

import numpy as np
import matplotlib.pyplot as plt
import pandas as pd


# Importing the datasets --->>>

dataset = pd.read_csv('data1.csv')
#   x is independent variable--
x = dataset.iloc[:,:-1].values  # iloc means integer location
     # we will set index of row and columns of dataframe
     # [:,:-1] means include all rows and all columns except last
# y is for the last column which is for prediction
  # y is dependent variable
y = dataset.iloc[:,-1].values # it will take all rows and last column

# print(x)


   # we will use scikit learn--
   # sklearn-- Scikit-learn is probably the most useful library
   # for machine learning in Python.
   # The sklearn library contains a lot of efficient tools for
   # machine learning and statistical modeling including classification,
   # regression, clustering and dimensionality reduction.

# Taking care of missing data ---->>

  # for the all missing values we will import the average mean value
from  sklearn.impute import SimpleImputer
imputer = SimpleImputer(missing_values=np.nan , strategy = 'mean')  # it  will take the mean value
imputer.fit(x[:,1:3])  # fit means calculate some parameters within this range
x[:,1:3] = imputer.transform(x[:,1:3])  # transform the  values into dataset in dataframe within range


# Encoding the categorical data----->>
   # we encode the data for boosting our machine learning model
   # we encode the string data into numberical values-->

   # There are three approaches for encoding--
     #Ordinal Encoding
     #One-Hot Encoding
     #Dummy Variable Encoding
   #Here we will use one hot encoding  

    # Encoding the independent variable-->
from sklearn.compose import ColumnTransformer
from sklearn.preprocessing import OneHotEncoder
ct = ColumnTransformer(transformers=[('encoder', OneHotEncoder(), [0])], remainder='passthrough')
x = np.array(ct.fit_transform(x))


    # Encoding the dependent variable-->
    # labelEncoder covert only in 1 and 0
from sklearn.preprocessing import LabelEncoder
# define labelEncoder
le = LabelEncoder()
y = le.fit_transform(y)  # update y with transform values

# Splitting the dataset into training set  and test set---->>
from sklearn.model_selection import train_test_split
# we will take four variable to train and test sets-
x_train, x_test, y_train, y_test = train_test_split(x, y, test_size = 0.2, random_state = 1)  # we are using random_state for fixing the shuffled value of our data set
    #  we will use train test split function and test_size =0.2 means it will take
    # 20 percent of the data for the test set...
    




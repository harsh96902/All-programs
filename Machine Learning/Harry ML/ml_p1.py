import matplotlib.pyplot as plt
import numpy as np
from sklearn import datasets, linear_model#for regression
from sklearn.metrics import mean_squared_error 

# There are already some datasets imported in sklearn library--->
diabetes = datasets.load_diabetes()
# ['data', 'target', 'frame', 'DESCR', 'feature_names', 'data_filename', 'target_filename'])
# print(diabetes.keys())

# print(diabetes.data)  # used to show data
# print(diabetes.DESCR)   # used for the description of diabetes

diabetes_x = diabetes.data[:, np.newaxis , 2]  # we can take only 1 feature 
    # for better understanding through graph but error will be much more
    # for getting minimum error using all features available
# diabetes_x = diabetes.data
# print(diabetes_x)

# splititng dataset for train and test---->
# for feature----
diabetes_x_train = diabetes_x[:-30]   # we will take first 30 for training
diabetes_x_test = diabetes_x[-30:]    #  we will take last 30 for testing

# for label ---
diabetes_y_train = diabetes.target[:-30]
diabetes_y_test = diabetes.target[-30:]

# now we will make a model of liner regression
model = linear_model.LinearRegression()

# now we will fit the data into model
model.fit(diabetes_x_train,diabetes_y_train) # means we will fit a line

#Till now model has been trained and now we will test or predict-->
diabetes_y_predict = model.predict(diabetes_x_test)

# now calculate the root mean square error-->
print("mean square error is: ",mean_squared_error(diabetes_y_test,diabetes_y_predict))

# Now we will calculate the weights means(how many features we have used) and intercept
print("weights : ",model.coef_)
print("Intercept : ",model.intercept_)

# now we will plot a graph
# plt.scatter(diabetes_x_test,diabetes_y_test) # scatter graph
# plt.plot(diabetes_x_test, diabetes_y_predict)
# plt.show()

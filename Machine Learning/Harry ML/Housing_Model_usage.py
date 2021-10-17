
import threading
from joblib import dump , load
import numpy as np
import pandas as pd
model = load("Dragon_Realstate_Model.joblib")

# So, we will give  one  value for every features and predict the MEDV for this
features = np.array([[-0.43942006,  3.12628155, -1.12165014, -0.27288841, -1.42262747, -0.24015072,
 -1.31238772,  2.61111401, -1.0016859,  -0.5778192,  -0.97491834,  0.41164221,
 -0.86091034]])

# housing = pd.read_csv("housing_data.csv")
# x = housing.iloc[: , :-1].values  
print(model.predict(features))  

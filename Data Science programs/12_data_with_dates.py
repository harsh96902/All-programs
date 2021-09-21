import numpy as np
import pandas as pd  

# Creating a DataFrame by passing a NumPy array, with a datetime index
#  and labeled columns:

dates = pd.date_range('20211001',periods = 8)

df = pd.DataFrame(np.random.randn(8,4),index = dates, columns = list('ABCD'))
print(df)

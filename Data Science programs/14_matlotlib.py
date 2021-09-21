from matplotlib import pyplot as plt  

# If we want to plot the data of two type of data then ---->>

x = [2,5,6,4]
y = [3,6,9,0]

x1 = [2,53,75,86]
y1 = [45,61,58,89]

plt.plot(x,y,label = "first data")
plt.plot(x1,y1,label = "Second data")
plt.legend()   # for labeling two different data

plt.show()
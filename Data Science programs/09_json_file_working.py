# JSON --->> Java Script Object Notation
# json is method to store data and objects
import json

j = '{"a":2,"b":4,"c":5}'
b = json.loads(j)  # it is used to load the data
print(b)

# write a json file
with open('1.jason','w') as f:
    json.dump(j,f)  # this is used to paste the into file

# for more go to the json python documentry    






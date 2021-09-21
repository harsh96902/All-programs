f = open("dictfunc.py","r")
content = f.readl()
# print(f.readline())   # we can use for read separate file
print(content)
#  Or we can use also like this
# for line in content:
#     print(line,end="")
f.close()

#  this is how we can read any file
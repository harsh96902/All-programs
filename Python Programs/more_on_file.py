f=open("harry.txt")
print(f.tell())   # this is used for knowning the location of pointer 
f.seek(10)    # to set the location of pointer and strt read from there
print(f.readline())
print(f.tell())
f.close()
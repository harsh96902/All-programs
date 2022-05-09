#  OTP Generation -->

n = input("Enter any number: ")
a = ""
for i in range(len(n)):
    if(i%2 != 0):
        a += n[i]
b = ""
# print(len(a))
for j in range(len(a)):                                                 
    b += str(int(a[j])**2)
print(b[:4])
# for k in range(4):
    # print(b[k],end = "")
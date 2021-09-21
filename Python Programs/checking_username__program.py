# CHECKING THE USERNAME (ALREADY EXIST OR NOT)

# IF WE HAVE TWO LIST AND CHECKING THE USERNAME
current_users = ["Monu","Sohan","Rohit","Nishant","Abhinav"]

new_users = ["Pranjul","Abhinav","Nishant","Harsh","Aman"]

for item in new_users:
    if item in current_users:
        print(f"{item} : you need to enter a new user name")
    else:
        print(f"{item} : The username is available")
 
# CHECKING ANY PARTICULAR NAME THAT WE ENTERED EXIST OR NOT
a = input("Enter a username\n")
if a in current_users:
    print("This name is already exist")
else:
    print("Login successfully")


f = open("harsh.txt","a")
f.write(a + "\n")

f.close()

f = open("harsh.txt","r")
content  = f.read()
print(content)
f.close()

# if a in h:
#     print("Not valid")
# else:
#     print("Success")    


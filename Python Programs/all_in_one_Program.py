# l1 = [4,5,2,6,8,9,7]
# l1.append(1)
# l1.sort()
# print(l1[:4])   # used it to print within the range
# print(l1[2:7])   
# print(l1[2:])   
# print(l1[2:7])   
# for item in l1:
    # print(item)

# if 5 in l1:
#     print("yes 5 is there")
# else:
#     print("Error") 
# ************************************************************
num = int(input("Enter the num : "))
i = 1
while(i<11):
    # print(f"{num} X {i} = ",num*i)
    print(num," X ",i," = ",num*i)
    i = i+1    
#*************************************************************
# n = int(input("Enter any num : "))
# i = 2
# while(i<n):
#     if(n%i == 0):
#         print(n,"is not a prime number")
#         i = i+1
#     else:    
#         print(n,"is  a prime number")
#         break
# ********************************************************
# for i in range(0,101,1):
#     print(i,end =" ")    
# ********************************************************
# n = int(input("Enter any num : "))
# sum = 0
# i = 0
# while i<n:
#     i = i+1
#     sum = sum + i
# print(sum) 
# ********************************************************   
# list = ["harsh","mayank","rohan","nishant"]
# print(list[3]) # for printing any particular item from the list
# list.append("SHubham")
# for item in list:
#     print(item.title()) # title is used to make the first letter capital
# print(len(list))  # to know the length of the list
# *******************************************************
# a = 10
# b = 56
# def function1(x,y):
#       sum = a+b
#       print(sum)
# function1(a,b)
# ******************************************************
# sum = lambda a,b:a+b  #used for one line condition
# print(sum(4,6))
# ******************************************************
# class = data + function**
# class student:
#     def __init__(self,name,sec,roll_no):
#         self.name = name
#         self.sec = sec
#         self.roll_no = roll_no
#     def printdetail(self):
#         print(f"Name is {self.name} and sec is {self.sec} and roll_no.is {self.roll_no}")
# s1 =  student("Harry","A",303)
# s1.printdetail()
# ********************************************************
# for i in range(1,101,1):
    # print(i,end = " ")
# ********************************************************
# recursive function :--- function call itself
# def recursion(x):
#     if(x==1):
#         return 1
#     else:
#         return x*recursion(x-1)    
# n = int(input("Enter any number : "))
# print(recursion(n))
# ********************************************************
# recursive Fibonacci series ----

# def recursive_fib(n):
#     if(n<=1):
#         return 1
#     else:
#         return recursive_fib(n-1) + recursive_fib(n-2)
# for i in range(0,10,1):
#     print(recursive_fib(i))        
# ********************************************************
# Name = "Harry"
# print(Name)
# ********************************************************
# boolean expression---- The expression which check the statement is true or false
# print(10>8)
# ********************************************************
# prime number -----
# for i in range(2,101):
#     for j in range(2,i):
#         if(i%j) == 0:
#             break
#      else:
#         print(i,end = " ")
# ********************************************************
# a = "Hello Harsh"
# print(len(a))     #print length 
# print(a.lower())   # print in lower case
# print(a.upper())   # print in upper  case
# ********************************************************
# b =  "harry bhai"[::-1] #print in reverse order
# print(b)
# *******************************************************
# Dictionary
# dict = {"Name":"Harsh Kumar","Age":20,"Course":"B.tech"}
# print(dict["Name"])
# print(dict["Age"])
# print(dict["Course"])
#********************************************************
# file handling-------
# reading mode--
# f = open("harsh.txt","r")
# print(f.readline())  # to read single line only
# print(f.readlines())  # to read whole text  line by line 
# print(f.read())
# f.close()
# *******************************************************
# writing mode--
# f = open("harsh.txt","w")
# f.write("My Branch is CSE")  #in write mode, the previous data will be clear 
# f.close()
# *******************************************************
# Append mode--
# f = open("harsh.txt","a")
# f.write(" Hello")
# f.close()
#********************************************************
# f = open("harsh.txt","a")
# print(f.tell()) # return current file location
# f.close()
# *******************************************************
# class and object ------
# class student:
#     def __init__(self,name,role,age):
#         self.name = name
#         self.role = role
#         self.age = age
#     def printdetails(self):
#         print("Name of the student is",self.name,"roll is",self.role,"Age is",self.age)
# s1 = student("Harry","Student",20)
# s1.printdetails()
# *******************************************************
# Hanoi Tower ---
# def hanoi(n,A,B,C):
#     if(n == 1):
#         print("Move disk",n,"from",A,"to",C)
#     else:
#         hanoi(n-1,A,C,B)
#         print("Move disk",n,"from",A,"to",C)
#         hanoi(n-1,B,A,C)    
# n = 3
# hanoi(n,"A","B","C")  
# ******************************************************  
# selection sorting----
# def selection_sort(list,n):
#     for i in range(0,n-1,1):
#         for j in range(i+1,n,1):
#             if(list[j]<list[i]):
#                 temp = list[i]
#                 list[i] = list[j]
#                 list[j] = temp
#     for z in range(0,n,1):
#         print(list[z])  
# list = [4,7,9,3,9,2,8]  
# num = len(list)
# selection_sort(list,num)                
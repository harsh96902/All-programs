# Hotel Management System
client_list = {1: 'Monu', 2: 'Sonu', 3:'Rohit'}
log_list = {1: 'exercise' , 2:'diet'}

def getdate():
    import datetime
    return datetime.datetime.now()

try:
    print("Select the client name")
    for key, value in client_list.items():
        print("press",key,"for",value)
    client_name = int(input())

    print("you have selected the client name is :",client_list[client_name], end="  ")
    print("press 1 for log ")
    print("press 2 for retrieve")

    op = int(input())

    if (op is 1):
        for key,value in log_list.items():
            print("press",key,"to log",value)
        log_name = int(input())
        print("you have selected for the log is:",log_list[log_name])
        f = open(client_list[client_name],"_",log_list[log_name],".txt")
        k="y"
        while (k is not "n"):
            my_text = input()
            f.write("[",str(getdate()),"]",my_text/n)
            k = input("Add more ?:y/n")
            continue
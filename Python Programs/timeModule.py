import time
initial = time.time()
for i in range(20):
    print("harsh")
    # time.sleep(2)   #  it will print harsh after 2 seconds
print(time.time()-initial)    #for how much time it take for execution


# for getting real time we can use:

localtime=time.asctime(time.localtime(time.time()))
print(localtime)
dic1 = {1:30,2:28,3:40,4:45,5:48,6:30}
print("Days having temperature between 40 to 50 are : ",end = "")
for item in dic1:
    if dic1[item] < 50 and dic1[item] > 40:
        print(item,end="  ")
print("")
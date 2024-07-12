date1 = (input("Enter the date in  DD/MM/YYYY  :")) 
print("MM/DD/YYYY : ",end=" ")
j=3
while j<6:
    print(date1[j],end="")
    j = j + 1
i=0
while i<3:
    print(date1[i],end="")
    i = i + 1
k=6
while k < len(date1):
    print(date1[k],end="")
    k = k + 1
print("")
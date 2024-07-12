str1 = str(input("Enter the string :"))
for i in range(0,len(str1)):
    count = 0
    for j in range(0,len(str1)):
        if str1[i] == str1[j]:
            count = count + 1
    print(str1[i],"-",count,"Times in the string")

str1 = input("Enter the string : ")
k = len(str1)
j = k - 1
flag = 0
for i in range(0,j):
    if str1[i] == str1[j]:
        flag = flag + 1
        j = j - 1
    else:
        flag = 0
        break
if flag == 0:
    print("String is not palinfrome")
else:
    print("String is palinfrome")
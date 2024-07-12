str1 = input("Enter the string : ")
j = 97
dic1 = {}
for i in range(1,27):
    dic2={chr(j):i}
    dic1.update(dic2)
    j = j + 1
a1 = 0
for i in range (0,len(str1)):
    a = dic1.get(str1[i])
    a1 = a1 + a
print(a1)
str1 = input("Enter the string : ")
l1 = []
for i in range(0,len(str1)):
    if str1[i] == 'a' or str1[i] ==  'A' or str1[i] == 'e' or str1[i] == 'E' or str1[i] == 'i' or str1[i] == 'I' or str1[i] == 'o' or str1[i] == 'O' or str1[i] == 'u' or str1[i] == 'U' :
        l1.append(str1[i])
tup1 = tuple(l1)
print(tup1)
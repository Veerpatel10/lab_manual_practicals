str1 = input("Enter the first string : ")
str2 = input("Enter the Second string : ")
flag = 0
for i in range (0,len(str1)):
    for j in range (0,len(str2)):
        if str1[i] == str2[j]:
            flag = flag + 1
if flag == len(str1):
    print("Two words are Anagrams")
else:
    print("Two words not are Anagrams")
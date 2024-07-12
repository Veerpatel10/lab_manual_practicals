str1 = input("Enter the file name : ")
f = open(str1,'r')
a = f.read()
print(a) 
for i in range (65,123):
    num = a.count(chr(i))
    if num > 0:
        print(chr(i)," = ",num)
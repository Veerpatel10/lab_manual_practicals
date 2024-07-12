print("-----Creating a text file and writing string to it----")
f = open("11.1text(1).txt",'a+')
c = input("Enter the string to enter in the file : ")
f.write(c)

f.write("\n")
f1 = open("11.1text(1).txt",'r+')
f2 = open("11.1text(1).txt",'r+')
print("-----Read file----")
a = f1.read()
print(a,"\n")
print("-----Read file line by line----")
b = f2.readlines()
print(b)
print("")
print("-----write string to a file----")
str2 = input("Enter the string : ")
f.write(str2)
f.write("\n")

print("")

print("-----write a list of strings ito a file----")
lis1 = ["hello ","world "]
print(lis1)
for i in range(0,len(lis1)):
    f.write(lis1[i])
    f.write("\n")


c = a.split()
count = 0
count1 = 0
for item in c:
    count = count + 1
print("")
print("Total number of words :",count)    
for items in b:
    count1 = count1 + 1
print("Total number of lines :",count1)    

f.close()
f1.close()


#print(len(c))
#    f.write(c[i])
#    f.write("\n")
#a = f1.read()
#print(c)
#print(a)
    #print(item)
#print(a)
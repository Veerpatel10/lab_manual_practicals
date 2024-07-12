l=[]

print("-----Adding elements in list-----")
num1 = int (input("Enter the number of element to enter int the list : "))
for i in range(0,num1):
    l.append(int(input("Enter the number :")))
print(l)
print("")

print("----Removing elements in list-----")
print(l)
l.remove(l[2])
print(l)
print("")

print("----Number elements in list-----")
print(len(l))
print("")

print("----Access elements of list using index-----")
for i in range(0,len(l)):
    print(l[i],end=" ")
print("\n")

print("----Sort list-----")
l.sort()
print(l)
print("")

print("----Reverse list-----")
l.reverse()
print(l)
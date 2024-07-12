# l=[]
# num1 = int(input("Enter the number of element to input : "))
# for i in range(0,num1):
#     l.append(int(input("Enter the number : ")))
# print(l)
# for i in range(0,len(l)):
#     for j in range(0,len(l)):
#         if l[i] != l[j]:
#             print(l[i],end=" ")


l=[]
num1 = int(input("Enter the number of element to input : "))
for i in range(0,num1):
    l.append(int(input("Enter the number : ")))
print(l)
l1=[]
for i in range(0,len(l)):
    # for j in range(0,len(l)):
    if l[i] not in l1:
        l1.append(l[i])
print(l1)
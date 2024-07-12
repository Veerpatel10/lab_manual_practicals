l=[]
num1 = int(input("Enter the number of element to input : "))
for i in range(0,num1):
    l.append(int(input("Enter the number : ")))

print("-----Positive numbers------")
for i in range(0,num1):
    if l[i] > 0:
        print(l[i],end=" ")
print("\n")

print("-----Negative numbers------")
for i in range(0,num1):
    if l[i] < 0:
        print(l[i],end=" ")
print("\n")

print("-----zero numbers------")
for i in range(0,num1):
    if l[i] == 0:
        print(l[i],end=" ")
print("\n")

print("-----odd numbers------")
for i in range(0,num1):
    if l[i]%2 != 0:
        print(l[i],end=" ")
print("\n")

print("-----even numbers------")
for i in range(0,num1):
    if l[i]%2 == 0:
        print(l[i],end=" ")
print("\n")

print("-----Average numbers------")
a1 = 0
for i in range(0,num1):
    a1 = a1 + l[i]
avg = a1/num1
print("Average : ",avg)
f = open("11_6_1text.txt",'r+')
f1 = open("11_6_2text.txt",'r+')

a = f.read()
b = f1.read()

print(a)
print(b)

a = a.replace(" ","")
b = b.replace(" ","")

l1 = len(a)
l2 = len(b)

l3 = l1 + l2

for i in range(0,l3):
    if i < l1:
        print(a[i],end="")
    if i < l2:
        print(b[i],end="")
print()
f.close()
f1.close()
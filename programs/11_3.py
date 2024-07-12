f = open("11_3text.txt",'r+')
a = f.read()
b = []
for i in range(0,len(a)):
    #b.append(a.find("1"))
    #print(i)
    if a[i]=="0" or a[i]=="1" or a[i]=="2" or a[i]=="3" or a[i]=="4" or a[i]=="5" or a[i]=="6" or a[i]=="7" or a[i]=="8" or a[i]=="9":
        b.append(a[i])
print(b)
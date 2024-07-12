#l=[]
#count = 0
#for i in range(0,10):
#    l.append(int(input("Enter the number : ")))
#
#for i in l:
#    for j in l:
#        if count > 5:
#            exit(0)
#        print(i,",",j,"\n")
#        count = count + 1


l=[]
count = 0
for i in range(0,10):
    l.append(int(input("Enter the number : ")))

for i in range(0,len(l),2):
    #for j in l:
        if count > 5:
            exit(0)
        print(l[i],",",l[i+1])
        # l.count(i+2)
        # l.index(i+2)
        #l.i+2
        i=i+2
        #j=j+1
        count = count + 1
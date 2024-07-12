import random
l=[]
l2=[]
l1=[0,1]
for i in range(0,4):
    for j in range(0,4):
        l2.append(random.choice(l1))
    l.append(l2)

for i in range(0,4):
    for j in range(0,4):
        print(l[i][j] , end=" ")
    print("")

maxr = 0
maxc = 0
rown = 0
coln = 0
for i in range(0,4):
    row = 0    
    col = 0
    for j in range(0,4):
        if l[i][j] == 1:
            row = row + 1 
        if l[j][i] == 1:
            col = col + 1
    if row > maxr:
        maxr = row   
        rown = i
    if col > maxc:
        maxc = col   
        coln = i

print("Rows wiht most number of 1s is row ",rown,"with",maxr,"1s")
print("Column wiht most number of 1s is Column ",coln,"with",maxc,"1s")
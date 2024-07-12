list2=[]
def dub(l1,l2):
    for item in l1:
        if item not in l2:
            l2.append(item)
list1 = [1,2,3,2,5]
print(list1)
dub(list1,list2)
print(list2)
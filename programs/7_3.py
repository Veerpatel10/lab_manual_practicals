dic1 = {1:"veer",2:"ramesh",3:"suresh"}
dic2 = {4:"harsh",5:"rahul",6:"rohan"}
print(dic1)
dic1.pop(2)
print(dic1)
dic1[4]="rahul"
print(dic1)
if 1 in dic1:
    print("Yes key 1 is in the dictonary")
for item in dic1:
    print(dic1[item])
dic1.update(dic2)
print(dic1)
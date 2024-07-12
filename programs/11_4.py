import string
f = open("11_4_1text.txt",'r+')
f1 = open("11_4_2text.txt",'w+')
a = f.readline()
print(a)
word = a.split(" ")
#print(word)
for item in word:
    if len(item)==4:
        f1.write(" **** ")
    else:
        #b = str(word)
        f1.write(item)
        f1.write(" ")
    
"""
for i in range(0,len(a)):
    count=0
    while count<4:
        if count == 4:
            f1.write("****")
            continue
        count = count + 1
    f1.write(a[i])
    #f1.write("****")
"""

"""
for i in a:
    word = a.split()
    for j in word:
        count = 0
        for k in j:
            if not k in string.punctuation:
                count += 1
        if count == 4:
            if"."in word:
                word = "****."
            elif","in word:
                word = "****,"
            elif"?"in word:
                word = "****?"
            elif"!"in word:
                word = "****!"
            else:
                word = "****"
            b = str(word)
            f1.write(b)
        #print(word , " ",file=11_4_2,end="")
f.close()
f1.close()
"""



"""
word = a.split(" ")
print(word)
for item in word:
    if len(item)==4:
        f1.write(" **** ")
    else:
        #b = str(word)
        f1.write(item)
        f1.write(" ")
"""
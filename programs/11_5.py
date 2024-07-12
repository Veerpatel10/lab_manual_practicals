f = open("11_5text.txt",'r+')
f1 = open("11_5text.txt",'r+')
a = f.read()
b1 = f1.readlines()
word = a.split()
#word1 = b.()
#print(b)
#print(word)
sum = 0
count = 0
for item in word:
    b = len(item)
    sum = sum + b
    count = count + 1
word_avg = sum/count
count = 0
count1 = 0
for items in b1:
    c = items.split()
    for items2 in c:
        count = count + 1
    count1 = count1 + 1
Avg_sent = count / count1
#print(items2)
#for item in word:
#    count = count + 1

print("Word Average : ",word_avg)
print("Average sentence Length : ",Avg_sent)
f.close()
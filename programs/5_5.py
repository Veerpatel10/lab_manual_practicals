# num1 = 1
# num2 = 0
# for i in range(3,13+1,1):
#     num1 = num1 * i
# for i in range(1,11+1,1):
#     num2 = num2 + i
# num3 = num2/num1
# print("Sum : ",num3)

j = 1
k = 3
ans = 0
for i in range(0,49):
    ans = ans + (j/k)
    j+=2
    k+=2
print("Sum : ",ans)
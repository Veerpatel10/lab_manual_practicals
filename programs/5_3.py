for i in range(0,5):
    for k in range(4,i,-1):
        print(" ",end="")
    for j in range(0,i+1):
        print("* ",end="")
    print("")
    
print("\n")

for i in range(0,5):
    num1 = 1
    for j in range(0,i+1):
        print(num1,end="")
        num1 = num1 + 1
    print("")
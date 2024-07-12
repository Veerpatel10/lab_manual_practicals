num1 = int(input("Enter the number : "))
num2 = int(input("Enter the number : "))
num3 = int(input("Enter the number : "))
n1 = num1 if num1 > num2 else num2
n2 = n1 if n1 > num3 else num3
print("the maximum number is : ",n2)
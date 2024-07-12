num1 = int(input("Enter the number : "))
rev = 0
while num1 != 0:
    digit = num1 % 10
    rev = rev * 10 + digit
    num1 = num1//10
print("rerverse order is : ",rev)

qua = 0.25
dim = 0.10
nic = 0.05
pen = 0.01
num1 = int(input("Enter the value : "))
q1 = num1 * qua
print("The value in quarter is : $",q1)
d1 = num1 * dim
print("The value in dime is : $",d1)
n1 = num1 * nic
print("The value in nickel is : $",n1)
p1 = num1 * pen
print("The value in penny is : $",p1)

a1 = q1 + d1 + n1 + p1

a2 = a1 * 70

print("The value in doller is : $",a2)
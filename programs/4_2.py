num1 = int(input("Enter the number of hour you work in a weak :  "))
num2 = int(input("Enter the hourly rate :  "))
num4 = 0
if num1>40:
    num4 = (num1 * num2)/2
     
    
num3 = num1 * num2 
print("The total wage of the weak is : ",num3 + num4)
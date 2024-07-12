import math
num1 = int(input("Enter the person weight in kg : "))
num2 = float(input("Enter the person height in meter : "))
bmi =  num1/pow(num2,2)
if bmi > 19 and bmi < 25 :
    print("The person is healthy")
elif bmi < 19 :
    print("The person is underweight")
elif bmi > 25 :
    print("The person is overweight")
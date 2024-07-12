import math
a = int(input ("Enter the value for a :"))
b = int(input ("Enter the value for b :"))
c = int(input ("Enter the value for c :"))
a1 = math.pow(b,2)
d = a1 - 4*a*c
print("Discriminant : ",d)
a1=math.sqrt(d)
r1 = (-b+a1)/2*a
print("Real root : ",r1)
r2 = (-b-a1)/2*a
print("Real root : ",r2)
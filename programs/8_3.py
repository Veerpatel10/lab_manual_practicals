def fib(n):
    if n == 0 or n == 1:
        return n
    else:
        return (fib(n-1)+fib(n-2))
num1 = int(input("Enter the number : "))
i=0
while i < num1:
    num2 = fib(i)
    print(num2,end =" ")
    i=i+1
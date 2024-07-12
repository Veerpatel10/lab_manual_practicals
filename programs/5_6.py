# def fun1(n):
#     num1 = 0
#     i=n
#     for j in range(1,i):
#         if i % j == 0:
#             num1 = num1 + j
#     if num1 == i:
#         print(i,"\n")
# # num1 = 0
# for i in range(6,30):
#     # for j in range(1,i):
#     #     if i % j == 0:
#     #         num1 = num1 + j
#     # if num1 == i:
#     #     print(i,"\n")
#     fun1(i)
# sum = 0 
# for i in range(1,7):
#     if 7 % i == 0:
#         sum = sum + i
# if sum == 7:
#     print(sum)


# def fun1(n):
#     num1 = 0
#     i=n
#     for j in range(1,i):
#         if i % j == 0:
#             num1 = num1 + j
#     if num1 == i:
#         print(i,"\n")
# # num1 = 0


for i in range(2,10000):
    num1 = 0 
    for j in range(1,i):
        if i % j == 0:
            num1 = num1 + j
    if num1 == i:
        print(i,"\n")
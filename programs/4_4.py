sub1 = int(input("Enter the marks of maths : "))
sub2 = int(input("Enter the marks of science : "))
sub3 = int(input("Enter the marks of english : "))
per = ((sub1 + sub2 + sub3)/300)*100
print("The persentage is : ",per)
if per > 90 :
    print("Grade of the student is : A")
elif per > 80 and per < 90 :
    print("Grade of the student is : B")
elif per > 70 and per < 79:
    print("Grade of the student is : C")
elif per > 60 and per < 99:
    print("Grade of the student is : D")
elif per > 50 and per < 59:
    print("Grade of the student is : E")
elif per < 50:
    print("Grade of the student is : F")


# def A():
#     print("Grade of the student is : A")
# def B():
#     print("Grade of the student is : B")
# def C():
#     print("Grade of the student is : C")
# def D():
#     print("Grade of the student is : D")
# def E():
#     print("Grade of the student is : E")
# def F():
#     print("Grade of the student is : F")
# def grade(number):
#     return dic.get(number)()
# sub1 = int(input("Enter the marks of maths : "))
# sub2 = int(input("Enter the marks of science : "))
# sub3 = int(input("Enter the marks of english : "))
# per = ((sub1 + sub2 + sub3)/300)*100
# dic = {
#     per>=90 : A(),
#     per<=89 and per>=80 : B(),
#     per<=79 and per>=70 : C(),
#     per<=69 and per>=60 : D(),
#     per<=59 and per>=50 : E(),
#     per<50 : F()
# }
# print("The persentage is : ",per)
# grade(per)

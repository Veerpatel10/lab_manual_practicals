dic1 = {"Gujarat":"Gandhinagar","Maharashtra":"Mumbai","Madhy pradesh":"Bhopal","Rajasthan":"Jaipur"}
srt1 = input("Enter the state name : ")
for item in dic1:
    if srt1 == item:
        print(item,":",dic1[item])
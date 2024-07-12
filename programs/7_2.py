set1 = {1,3,2}
set2 = {4,7,2}
print(set1)
print(set2)
set1.remove(1)
print(set1)
set2.remove(7)
print(set2)

print("\nUnion")
print(set1 | set2)

print("\nIntersection")
print(set1 & set2)

print("\nDifference")
print(set1 - set2)

print("\nSymmetric")
print(set1 ^ set2)

print("\nSubset")
print(set1 == set2)
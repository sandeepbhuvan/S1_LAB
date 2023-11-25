a = input("Enter list 1: ")
list1= a.split()
print(list1)

b = input("Enter list 2: ")
list2= b.split()
print(list2)

if len(list1) == len(list2):
    print("Both lists are equal size")
else:
    print("Both lists are different size")

sum1=0
for x in list1:
    sum1=sum1+ int(x)

sum2=0
for x in list2:
    sum2=sum2+ int(x)

if sum1 == sum2:
    print("Sums are equal")
else:
    print("Sums are not equal")

for e in list1:
    for f in list2:
        if e == f:
            print(e, "is a duplicate")

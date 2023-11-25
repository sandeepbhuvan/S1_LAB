def sumlist(list1):
        sum=0
        for x in list1:
            sum+=x
        print("The sum of the list is: ", sum)
        
list = []
n = int(input("Enter no. of elements : "))
for i in range(n):
    item = int(input("Enter element : "))
    list.append(item)
sumlist(list)

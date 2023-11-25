def pyramid(n):
    for i in range(1,n+1):
        for num in range(1,i+1):
                print(i*num,end=" ")
        print("\n") 

a = int(input("Enter the limit: "))
pyramid(a)
   


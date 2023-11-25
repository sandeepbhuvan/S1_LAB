def fibonacci(num):
    a = 0
    b = 1
    print(a , b ,end= " ")
    for i in range(num):
        c = a + b
        a = b
        b = c
        print(b, end=" ")


n = int(input("Enter a number: "))
fibonacci(n)



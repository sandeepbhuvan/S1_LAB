def factorial(n):
    b = n
    factorial = 1
    while(n>0):
        factorial = factorial * n
        n-=1
    print("Factorial of " , b , " is " ,factorial)


a = int(input("Enter a number: "))
factorial(a)

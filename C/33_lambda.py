# program to compute area of square,triangle, rectangle using lambda functions

s = input("Enter the shape (square, rectangle, triangle): ")
if s == "square":
    side = float(input("Enter the side length: "))
    print("Area of square is: ",lambda side: side * side)
elif s == "rectangle":
    length = float(input("Enter the length: "))
    width = float(input("Enter the width: "))
    print("Area of rectangle is: ",lambda length,width: length * width)
elif s == "triangle":
    base = float(input("Enter the base length: "))
    height = float(input("Enter the height: "))
    print("Area of triangle is: ",lambda base,height: 0.5 * base * height)
else:
    print("Invalid shape")


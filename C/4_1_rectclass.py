class Rectangle:
    def __init__(self, length, width):
        self.length = length
        self.width = width

    def area(self):
        return self.length * self.width

# Create two rectangle objects
a = int(input("Enter length of rectangle 1: "))
b = int(input("Enter width of rectangle 1: "))
c = int(input("Enter length of rectangle 2: "))
d = int(input("Enter width of rectangle 2: "))
rectangle1 = Rectangle(a,b)
rectangle2 = Rectangle(c,d)

# Compare their areas
if rectangle1.area() > rectangle2.area():
    print("Rectangle 1 has a larger area.")
elif rectangle1.area() < rectangle2.area():
    print("Rectangle 2 has a larger area.")
else:
    print("Both rectangles have the same area.")

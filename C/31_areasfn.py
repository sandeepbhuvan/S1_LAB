def calculate_area(shape):
    
    if shape == "square":
        side = float(input("Enter the side length: "))
        area = side * side
        return area
    elif shape == "rectangle":
        length = float(input("Enter the length: "))
        width = float(input("Enter the width: "))
        area = length * width
        return area
    elif shape == "triangle":
        base = float(input("Enter the base length: "))
        height = float(input("Enter the height: "))
        area = 0.5 * base * height
        return area
    else:
        return "Invalid shape"

s = input("Enter the shape (square, rectangle, triangle): ")
print(calculate_area(s))
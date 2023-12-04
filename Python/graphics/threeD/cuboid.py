def area():
    length = float(input("Enter the length: "))
    width = float(input("Enter the width: "))
    height = float(input("Enter the height: "))
    area = 2 * (length * width + width * height + height * length)
    print(area)

def perimeter():
    length = float(input("Enter the length: "))
    width = float(input("Enter the width: "))
    height = float(input("Enter the height: "))
    perimeter = 4 * (length + width + height)
    print(perimeter)


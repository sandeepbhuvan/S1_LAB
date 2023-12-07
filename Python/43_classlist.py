class ListElems:
    def __init__(self):
        self.__my_list = []

    def add_element(self, element):
        self.__my_list.append(element)

    def delete_element(self, element):
        if element in self.__my_list:
            self.__my_list.remove(element)
        else:
            print(f"{element} not found in the list.")

    def display_list(self):
        print("Elements in the list:")
        for element in self.__my_list:
            print(element)

exlist = ListElems()

while True:
    print("\n1. Add element")
    print("2. Delete element")
    print("3. Display list")
    print("4. Exit")

    choice = input("Enter your choice: ")

    if choice == "1":
        element = input("Enter the element to add: ")
        exlist.add_element(element)
    elif choice == "2":
        element = input("Enter the element to delete: ")
        exlist.delete_element(element)
    elif choice == "3":
        exlist.display_list()
    elif choice == "4":
        break
    else:
        print("Invalid choice. Please try again.")

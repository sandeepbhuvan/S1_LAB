class Bank:
    def __init__(self, accno, name, acctype, balance):
        self.accno = accno
        self.name = name
        self.acctype = acctype
        self.balance = balance
    def deposit(self, amount):
        self.balance += amount
    def withdraw(self, amount):
        self.balance -= amount
    def balance(self):
        return self.balance
    
# Create two bank accounts
a = int(input("Enter account number of account 1: "))
b = input("Enter name of account 1: ")
c = input("Enter account type of account 1: ")
d = int(input("Enter balance of account 1: "))
account1 = Bank(a,b,c,d)

e = int(input("Enter account number of account 2: "))
f = input("Enter name of account 2: ")
g = input("Enter account type of account 2: ")
h = int(input("Enter balance of account 2: "))
account2 = Bank(e,f,g,h)

# Compare their balances
if account1.balance > account2.balance:
    print("Account 1 has a larger balance.")
elif account1.balance < account2.balance:
    print("Account 2 has a larger balance.")
else:
    print("Both accounts have the same balance.")

# Deposit and withdraw from account 1
while(1):
    print("Enter 1 to deposit to account 1")
    print("Enter 2 to withdraw from account 1")
    print("Enter 3 to withdraw from account 2")
    print("Enter 4 to deposit to account 2")
    print("Enter 5 to check balance of account 1")
    print("Enter 6 to check balance of account 2")
    print("Enter 7 to exit")
    choice = int(input("Enter choice: "))
    if choice == 1:
        amount = int(input("Enter amount to deposit: "))
        account1.deposit(amount)
        print("Balance of account 1 is: ", account1.balance)
    elif choice == 2:
        amount = int(input("Enter amount to withdraw: "))
        account1.withdraw(amount)
        print("Balance of account 1 is: ", account1.balance)
    elif choice == 3:
        amount = int(input("Enter amount to withdraw: "))
        account2.withdraw(amount)
        print("Balance of account 2 is: ", account2.balance)
    elif choice == 4:
        amount = int(input("Enter amount to deposit: "))
        account2.deposit(amount)
        print("Balance of account 2 is: ", account2.balance)
    elif choice == 5:
        print("Balance of account 1 is: ", account1.balance)
    elif choice == 6:
        print("Balance of account 2 is: ", account2.balance)
    elif choice == 7:
        break
    else:
        print("Invalid choice")


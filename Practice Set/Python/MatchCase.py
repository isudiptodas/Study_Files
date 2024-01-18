# Match case

a = int(input("Enter the value of a (1-4): "))

match a:
    case 1:
        print("You choosed 1")
    case 2:
        print("You choosed 2")
    case 3:
        print("You choosed 3")
    case 4:
        print("You choosed 4")
    case _:
        print("Invalid choice")   # For default choice

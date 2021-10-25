weight = (int(input("Your Weight: ")))
unit = input("(L)bs or (K)gs: ")

if unit.upper() == "L":
    converter = weight * 0.45
    print(f"You are {converter}kgs")

else:
    converter = weight / 0.45
    print(f"You are {converter}lbs")
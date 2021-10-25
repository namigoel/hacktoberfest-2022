command = ""
Started = False

while True:
    command = input("> ").lower()
    if command == "start":
        if Started:
            print("Car is already Started lol")
        else:
            Started = True
            print("Car is no longer Idle")
    
    elif command == "stop":
        if not Started:
            print("Car is already stopped!")
        else:
            Started = False
            print("Car is Idle")

    elif command == "help":
        print("""
start - start the car
stop - stop the car
quit - quit the game
        """)
    
    elif command == "quit":
        break
    
    else:
        print("That is Not a Valid Input")
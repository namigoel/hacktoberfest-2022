choice = input("If you want to convert to celcius, write 'c' if you want to convert to fahrenheit, write 'f': ").lower()

if choice == "c":
    a = float(input("Enter temperature in celsius: "))
    fahrenheit = (a * 9/5) + 32
    print('%.2f Celsius is: %0.2f Fahrenheit' %(a, fahrenheit))
    
elif choice == "f":
    b = float(input("Enter temperature in fahrenheit: "))
    celsius = (b - 32) * 5/9
    print('%.2f Fahrenheit is: %0.2f Celsius' %(b, celsius))
else:
    print("That is not a valid option!")


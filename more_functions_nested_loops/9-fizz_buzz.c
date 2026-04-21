# FizzBuzz Test Solution
# Iterate numbers from 1 to 100
for num in range(1, 101):
    # Check for multiples of both 3 and 5 first
    if num % 3 == 0 and num % 5 == 0:
        print("FizzBuzz", end=" ")
    # Check for multiples of 3
    elif num % 3 == 0:
        print("Fizz", end=" ")
    # Check for multiples of 5
    elif num % 5 == 0:
        print("Buzz", end=" ")
    # Print the number itself if not divisible by 3 or 5
    else:
        print(num, end=" ")


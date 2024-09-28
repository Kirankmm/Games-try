import random

def guess_the_number():
    # Computer selects a random number between 1 and 100
    number_to_guess = random.randint(1, 100)
    attempts = 0
    print("Welcome to 'Guess the Number' game!")
    print("I have selected a number between 1 and 100. Try to guess it!")

    while True:
        try:
        # Take user's guess as input
            user_guess = int(input("Enter your guess: "))
            attempts += 1

        # Check if the guess is correct
            if user_guess < number_to_guess:
                print("Too low! Try again.")
            elif user_guess > number_to_guess:
                print("Too high! Try again.")
            else:
                print(f"Congratulations! You guessed the number in {attempts} attempts.")
                break  # Exit the loop when the guess is correct
        except ValueError:
            print("Invalid input! Please enter a valid number.")

# Start the game
if __name__ == "__main__":
    guess_the_number()

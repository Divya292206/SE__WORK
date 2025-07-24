/*Write a C++ program that asks the user to guess a number between 1 and 100. The 
program should provide hints if the guess is too high or too low. Use loops to allow 
the user multiple attempts. */

#include <iostream>
#include <cstdlib>  // for rand() and srand()
#include <ctime>    // for time()

using namespace std;

int main() 
{
    int secretNumber, userGuess;
    int attempts = 0;

    srand(time(0));
    secretNumber = rand() % 100 + 1;  

    cout << "Guess the number (between 1 and 100):" << endl;

    do 
	{
        cout << "Enter your guess: ";
        cin >> userGuess;
        attempts++;

        if (userGuess > secretNumber) 
		{
            cout << "Too high! Try again." << endl;
        } 
		else if (userGuess < secretNumber) 
		{
            cout << "Too low! Try again." << endl;
        } 
		else 
		{
            cout << "Congratulations! You guessed the number in " << attempts << " attempts." << endl;
        }
    } while (userGuess != secretNumber);

    return 0;
}


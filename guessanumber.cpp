#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));  
    int number = rand() % 100 + 1; 
    int attempts = 0;

    cout << "Welcome to the Guess the Number Game!" << endl;
    cout << "I have chosen a number between 1 and 100. Try to guess it!" << endl;

    do {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess > number) {
            cout << "Too high! Try again." << endl;
        } else if (guess < number) {
            cout << "Too low! Try again." << endl;
        } else {
            cout << "Congratulations! You guessed the number in " << attempts << " attempts." << endl;
        }
    } while (guess != number);

    return 0;
}

// Task 1 - Number Guessing Game
// CodSoft C++ Internship
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0)); // seed random number
    int secret = rand() % 100 + 1;
    int guess, attempts = 0;

    cout << "=== Number Guessing Game ===" << endl;
    cout << "Guess a number between 1 and 100." << endl;

    do {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess > secret)
            cout << "Too high! Try again.\n";
        else if (guess < secret)
            cout << "Too low! Try again.\n";
        else
            cout << "🎉 Correct! You guessed it in " << attempts << " attempts.\n";
    } while (guess != secret);

    return 0;
}

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main ()
{
    srand(time(0));

    int randomNumber = rand() % 100 + 1;
    int guess, attempts = 0;

    cout << "=== Number Guessing Game ===" << endl;
    cout << "=== Guess a number between 1 and 100" << endl;

    do
    {
        cout << "Enter your guess: ";
        cin >> guess;

        attempts++;

        if (guess > randomNumber)
    {
           cout << "Too High!" << endl;
    }
        else if (guess < randomNumber)
        {
           cout << ("Too Low!") << endl;
        }
        else
        {
            cout << "Congratulations! you guesses the number." << endl;
            cout << "Attempts:" << attempts << endl;
        }
  } while (guess != randomNumber);

  return 0;

}
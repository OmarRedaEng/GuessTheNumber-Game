#include <iostream>
using namespace std;

int main()
{
    srand(time(NULL));
    int GeneratedNumber = (rand() % 101);        // Generate a number from 0-100 inclusive
    cout << "Welcome to Guess The Number Game !\n";
    cout << "A number between 0-100 inclusive has been generated.\n";
    int Number;
    int GuessCount = 0;
    while (true)
    {
        cout << "\nPlease enter your guess (0-100) : ";
        cin >> Number;
        GuessCount++;
        if (Number == GeneratedNumber)
        {
            cout << "Congratulations! You Guessed the number correctly.\n";
            if (GuessCount==1)
            {
                cout << "Wow, are you a magician ?! it took you only 1 try to guess the number correctly!\n";
            }
            else
            {
                cout << "It took you " << GuessCount << " tries to guess the number correctly!\n";
            } 
            break;
        }
        else if (GeneratedNumber > Number)
        {
            cout << "Your guess is smaller than the number! Please try again.\n";
        }
        else
        {
            cout << "Your guess is larger than the number! Please try again.\n";
        }
    }
    cout << "Thank you for playing!\n";
    return 0;
}
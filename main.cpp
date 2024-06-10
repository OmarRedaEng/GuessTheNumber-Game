#include <iostream>
using namespace std;

int main()
{
    cout << "Welcome to Guess The Number Game !\n";
    cout << "Enter 1 for Single-Player Mode.\n";
    cout << "Enter 2 for 2-Player Multiplayer Mode.\n";
    int Mode;
    cout << "Please choose your mode : ";
    cin >> Mode;
    while (Mode != 1 && Mode != 2)
    {
        cout << "\nInvalid choice, please re-enter your mode : ";
        cin >> Mode;
    }
    if (Mode == 1)          //Single-Player Mode
    {
        cout << "\nWelcome to the Single-Player Mode.\n";
        cout << "A number between 0-100 inclusive has been generated.";
        int Number;
        int GuessCount = 0;
        srand(time(NULL));
        int GeneratedNumber = (rand() % 101); 
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
        }
        else if (Mode == 2)             //Multiplayer Mode
        {
            cout << "Welcome to the 2-Player Multiplayer Mode.\n";
            cout << "For each player a random number is generated and the winner is who guesses the other's player number first.\n";
            string Name1;
            string Name2;
            cout << "Enter Player 1's name : ";
            cin >> Name1;
            cout << "Enter Player 2's name : ";
            cin >> Name2;
            int Number1;
            int Number2;
            int GuessCount1 = 0;
            int GuessCount2 = 0;
            srand(time(NULL));
            int GeneratedNumber1 = (rand() % 101); 
            int GeneratedNumber2 = (rand() % 101);
            while (true)
            {
                cout << endl << Name1 << "'s turn.\n";
                cout << "Please enter your guess (0-100) : ";
                cin >> Number1;
                GuessCount1++;
                if (Number1 == GeneratedNumber2)
                {
                    cout << "Congratulations " << Name1 << " ! You guessed the number correctly.\n";
                    if (GuessCount1==1)
                    {
                        cout << "Wow " << Name1 << " ! are you a magician ?! it took you only 1 try to guess the number correctly!\n";
                    }
                    cout << Name1 << " is the winner !\n";
                    break;
                }
                else if (GeneratedNumber2 > Number1)
                {
                    cout << "Your guess is smaller than the number!\n";
                }
                else
                {
                    cout << "Your guess is larger than the number!\n";
                }
                cout << endl << Name2 << "'s turn.\n";
                cout << "Please enter your guess (0-100) : ";
                cin >> Number2;
                GuessCount2++;
                if (Number2 == GeneratedNumber1)
                {
                    cout << "Congratulations " << Name2 << " ! You guessed the number correctly.\n";
                    if (GuessCount2==1)
                    {
                        cout << "Wow " << Name2 << " ! are you a magician ?! it took you only 1 try to guess the number correctly!\n";
                    }
                    cout << Name2 << " is the winner !\n";
                    break;
                }
                else if (GeneratedNumber1 > Number2)
                {
                    cout << "Your guess is smaller than the number!\n";
                }
                else
                {
                    cout << "Your guess is larger than the number!\n";
                }
            }
        }
        cout << "Thank you for playing!\n";
        return 0;
}
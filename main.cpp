#include <iostream>
using namespace std;

int main()
{
    srand(time(NULL));
    int Number = (rand() % 101);        // Generate a number from 0-100
    cout << Number;
    return 0;
}
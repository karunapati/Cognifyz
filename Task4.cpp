#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(static_cast<unsigned int>(time(nullptr)));
     int min = 1;
    int max = 100;
    int number= rand() % (max - min + 1) + min;
    int guess;
    int attempts = 0;
    cout << "Welcome to the Number Guessing Game!" << endl;
   do
    {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess < number)
        {
            cout << "Try a high number." << endl;
        }
        else if (guess > number)
        {
            cout << "Try a low number." << endl;
        }
        else
        {
            cout << "Congratulations! You guessed the correct number=" << number <<endl;
            cout<<"Total attempts:"<<attempts<<endl;
            }
    } while (guess != number);
    return 0;
}

#include "headerExample5.h"

int main()
{
    bool guessed = false;
    int countTries = 0;

    cout << "\n\n";
    while (!guessed && countTries < 3)
    {
        int guess;
        cout << "How many leaves?" << endl;
        cin >> guess;

        countTries++;

        if (guess == 14)
            guessed = true;
    }

    if(guessed)
      cout << "You win!\n";
    else cout << "Too many tries! Get out of my program!\n\n";
}

#include "headerExample5.h"

int main()
{
    bool guessed = false;

    while (!guessed)
    {
        int guess;
        cout << "How many leaves?" << endl;
        cin >> guess;

        if (guess == 14)
            guessed = true;
    }

    cout << "You win!" << endl;
}

#include "headerExample5.h"

int main()
{
    //While loop example
    bool makeItFalseQuick = true;
    while (makeItFalseQuick)
    {
        cout << "Is is still true?" << endl;
        makeItFalseQuick = false;
    }

    cout << endl;

    //For loop example
    cout << "Count from 0 to 9" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << i << endl;
    }

    cout << endl;
    //Break example
    while (true)
    {
        break;
    }

    cout << "This time just print the odd ones "<< endl;
    //Continue example
    for (int i = 0; i < 10; i++)
    {
        if (i % 2 == 0)
            continue;
        cout << i << endl;
    }
}

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string awesomeSong = "Buddy you're a boy make a big noise\n"
                        "Playin' in the street gonna be a big man some day\n"
                        "You got mud on yo' face\n"
                        "You big disgrace\n"
                        "Kickin' your can all over the place\n"
                        "Singin'\n"
                        "We will we will rock you\n"
                        "We will we will rock you\n"
                        "Buddy you're a young man hard man\n"
                        "Shoutin' in the street gonna take on the world some day\n"
                        "You got blood on yo' face\n"
                        "You big disgrace\n"
                        "Wavin' your banner all over the place\n\n"
                        "We will we will rock you\n"
                        "(Sing it!)\n"
                        "We will we will rock you\n"
                        "Buddy you're an old man poor man\n"
                        "Pleadin' with your eyes gonna make you some peace some day\n"
                        "You got mud on your face\n"
                        "Big disgrace\n"
                        "Somebody better put you back into your place\n\n"
                        "We will we will rock you\n"
                        "(Sing it!)\n"
                        "We will we will rock you\n\n"
                        "(Everybody)\n\n"
                        "We will we will rock you\n"
                        "We will we will rock you\n\n"
                        "(Alright)\n";

    int index;
    string changeFrom;
    string changeTo;

    cout << "Which word would you like to change in the song?\n";
    cin >> changeFrom;
    index = awesomeSong.find(changeFrom);

    cout << "Which word would you ike to substitute it for?\n";
    cin >> changeTo;

    while (index != -1)
    {
        awesomeSong.replace(index, changeFrom.length(), changeTo);
        index = awesomeSong.find(changeFrom);
    }

    cout << awesomeSong << endl;

    cout << sizeof(string) << endl;
}

#include "headerExample5.h"

using namespace std;

int main() {

    // Create variables for words

    string adjective = "happy";
    string animal = "dragon";
    string location = "sea";
    string food1 = "trees";
    string food2 = "bushes";
    string name = "Geoff";
    string job = "butcher";
    string verb = "fight";
    string location2 = "city";

    // Print the Story
    cout << "\n\n\nOnce upon a time, there was a(n) " << adjective << " " << animal << "." << endl;
    cout << "The " << animal << " lived by the " << location << "." << endl;
    cout << "He ate " << food1 << " and " << food2 << "." << endl;
    cout << "People thought the " << animal << " was too " << adjective << "." << endl;
    cout << "The people sent " << name << ", the village's " << job << " to " << verb << " the " << animal << "." << endl;
    cout << "The " << animal << " thought that sounded unpleasant, so he left the " << location << "." << endl;
    cout << "Now he lives in the " << location2 << " and eats the " << food1 << " and " << food2 << " there instead.\n\n\n" << endl;

}

#include "header1.h"

int main() {

    // Create an fstream variable
    fstream fileStream;

    fileStream.open("test.txt", ios::out);

    if (fileStream.is_open()) {
        cout << "File opened successfully!" << endl;
        fileStream << "Saving this to the file." << endl;
    }

    fileStream.close();

    // Reading
    fstream readStream;
    readStream.open("test.txt", ios::in);

    string readWord;
    string readLine;

    if(readStream.is_open()) {

        // Reads up until the first space.
        readStream >> readWord;
        cout << readWord << endl;

        // Reads the whole line.
        getline(readStream, readLine);
        cout << readLine << endl;
    }

    readStream.close();

    cin.get();
}

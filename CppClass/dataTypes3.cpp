#include <iostream>
#include <string>

using namespace std;

int main(){

  // int stands for Integer
  //  -- Range: -2147483648 to 2147483647
  int year = 1988;

  // double and float <-> rational number with "."
  double pi = 3.14159265; // number with up to 15 digits
  float heightInMeter = 1.92; // number with up to 7 digits

  // char stands for Character
  char letter = 'R'; // Range from -128 to 127
                     // or from 0 to 255

  // string is the same as an array of characters
  // do #include <string> everytime you want to use
  // this data type
  string description = "This is a c++ class!";

  cout << endl << endl << endl;
  cout << "I was born in the year " << year << endl;
  cout << "So by the end this year I will be " << 2017 - year << endl;
  cout << "I am "<< heightInMeter<<" meters tall." << endl;
  cout << "Some of the digits of Pi are: " << pi << "."<< endl;
  cout << "Rick's name starts with: " << letter << endl;
  cout << "What class is this? --> " << description << "\n";
  cout << "\n\n\n";

}

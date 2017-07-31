#include "headerExample5.h"

// This program tell you which Mach
// speed the input vehicle is in

int main(){

  int speed = 1000;
  cout << "What is your ship's max speed \n ";
  cin >> speed;
  cout << "\n";

  switch(speed/767){
      case 0:
        cout << "Mach 0" << endl;
        break;
      case 1:
        cout << "Mach 1" << endl;
        break;
      case 2:
        cout << "Mach 2" << endl;
        break;
      case 3:
        cout << "Mach 3" << endl;
        break;
      case 4:
        cout << "Mach 4" << endl;
        break;
      case 5:
        cout << "Mach 5" << endl;
        break;
      default:
        cout << "Above Mach 5" << endl;
  }

  int option;
  cout << "Choose your case 1/2/3: "<< endl;
  cin >> option;
  switch(option){
    case 1:
      cout << "Option 1\n";
      break;
    case 2:
      cout << "Option 2\n";
      break;
    case 3:
      cout << "Option 3\n";
      break;
    default:
      cout << "Default option\n";

  }


  cout << "\n\n";
  //
  // double intMach = speed/767;
  // double realMach = speed/767.0;
  //
  // cout << "Integer Mach is: "<< intMach << endl;
  // cout << "Exact Mach is: "<< realMach << "\n\n\n";
}

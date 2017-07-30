#include "headerExample5.h"

// This program tell you which Mach
// speed the input vehicle is in

int main(){

  int speed = 1000;
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
  cout << "\n\n";
  //
  // double intMach = speed/767;
  // double realMach = speed/767.0;
  //
  // cout << "Integer Mach is: "<< intMach << endl;
  // cout << "Exact Mach is: "<< realMach << "\n\n\n";
}

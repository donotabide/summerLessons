#include "headerExample5.h"

// This program tell you which Mach
// speed the input vehicle is in

int main(){

  int speed = 1000;
  cout << "\n\n";
  if((speed/767)<1){
    cout << "Mach 0" << endl;
  } else if ((speed/767)<2){
    cout << "Mach 1" << endl;
  } else if ((speed/767)<3){
    cout << "Mach 2" << endl;
  } else if ((speed/767)<4){
    cout << "Mach 3" << endl;
  } else if ((speed/767)<5){
    cout << "Mach 4" << endl;
  } else if ((speed/767)<6){
    cout << "Mach 5" << endl;
  } else cout << "Above Mach 5" << endl;

  double intMach = speed/767;
  double realMach = speed/767.0;

  cout << "Integer Mach is: "<< intMach << endl;
  cout << "Exact Mach is: "<< realMach << "\n\n\n";
}

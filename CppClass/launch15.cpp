#include "header1.h"

bool launchRocket();

bool launchRocket(){
  string confirm;
  cout << "Ready for launch?" << endl;
  cin >> confirm;
  if(confirm[0] == 'Y' || confirm[0] == 'y')
    return true;
  else return false;
}

int main(){
  cout << "\n\nStart Program \n\n";

  if(launchRocket()){
    cout << endl << endl;
    for(int i = 10; i >= 0; i--)
      cout << i << endl;
    cout << "\n\nLift \n\n";
  } else
    cout << "\n\nLaunch Aborted\n\n";
}

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
    for(int i = 10; i > 0; i--)
      cout << i << endl;
    cout << "Lift Off";
  } else
    cout << "Launch Aborted";
}

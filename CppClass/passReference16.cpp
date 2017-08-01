#include<iostream>
#include<string>

using namespace std;

void changeBalance(string action, int &balance, int value);

int main() {

    string option;
    int balance = 1000;
    int value;
    cout << "This is your bank account. Are you withdrawing or depositing? "<<endl;
    cin >> option;
    cout << "By how much would you like to change it?" << endl;
    cin >> value;

    changeBalance(option, balance, value);
    cout << "\n\nNew Balance: "<< balance << endl;


}

void changeBalance(string action, int &balance, int value)
{
    if(action[0] == 'W' || action[0] == 'w')
      balance -= value;
    else if(action[0] == 'D' || action[0] == 'd')
      balance += value;
    else{
      cout << "Action not valid. Program terminated." << endl;
      return;
    }
}

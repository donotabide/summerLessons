#include <random>
#include <iostream>
#include <string>


using namespace std;

int main() {
  random_device rd; // This starts an object that
                    // allow us to use random values
  // Treat d6 as a 6 sided dice
  uniform_int_distribution<int> d6(1, 6);

  string player1Name;
  int player1Str;
  int player1Def;
  int player1Armor;
  int player1Skill;

  string player2Name;
  int player2Str;
  int player2Def;
  int player2Armor;
  int player2Skill;

  cout << "\n\nSetup Player 1" << endl;
  // To Do: get player1 Stats
  cout << "Player1 Name: ";
  cin >> player1Name;
  cout << "Player1 Strength: ";
  cin >> player1Str;
  cout << "Player1 Defence: ";
  cin >> player1Def;
  cout << "Player1 Armor: ";
  cin >> player1Armor;
  cout << "Player1 Skill: ";
  cin >> player1Skill;


  cout << "\n\nSetup Player 2" << endl;
  // To Do: get player2 Stats
  cout << "Player2 Name: ";
  cin >> player2Name;
  cout << "Player2 Strength: ";
  cin >> player2Str;
  cout << "Player2 Defence: ";
  cin >> player2Def;
  cout << "Player2 Armor: ";
  cin >> player2Armor;
  cout << "Player2 Skill: ";
  cin >> player2Skill;

  // To DO: Set both players health to a value
  // that you wish --> either random or you decide
  int player1Health = 200; // = ?;

  int player2Health = 200; // = ?;

  // Turns initially set to 0
  int turns = 0;

  cout << "\n\n\nFIGHT!\n\n\n";
    // Fight Loop
    // To Do: Set conditions in loop
    // hint base it on both players health and an
    // upper limit for terms
  while (player1Health > 0 && player2Health >0 && turns < 100) {
      cin.ignore();
      // setting variables for attack and damage
      int attackRoll;
      int damageRoll;

      // Attack P1 > P2
      attackRoll = player1Skill + d6(rd);
      if (attackRoll >= 3 + player2Def) {
          // Attack hits!
          cout << player1Name << " hits " << player2Name << "." << endl;
          damageRoll = player1Str + d6(rd) - player2Armor;
          if (damageRoll > 0) {
              player2Health -= damageRoll;
              cout << player2Name << " takes " << damageRoll << " damage." << endl;
          }
          else {
              cout << player2Name << "'s armor blocks the hit." << endl;
          }
      }
      else {
          cout << player1Name << " missed." << endl;
      }

      // Attack P2 > P1
      attackRoll = player2Skill + d6(rd);
      if (attackRoll >= 3 + player1Def) {
          cout << player2Name << " hits " << player1Name << "." << endl;
          damageRoll = player2Str + d6(rd) - player1Armor;
          if (damageRoll > 0) {
              cout << player1Name << " takes " << damageRoll << " damage." << endl;
              player1Health -= damageRoll;
          }
          else {
              cout << player1Name << "'s armor blocks the hit." << endl;
          }
      }
      else {
          cout << player2Name << " missed." << endl;
      }

      cout << player1Name << " HP: " << player1Health << endl;
      cout << player2Name << " HP: " << player2Health << endl <<endl;
      turns++;

  }
  if(player1Health > player2Health)
    cout << "\n\n" << player1Name << " won!\n\n";
  else cout << "\n\n" << player2Name << " won!\n\n";
}

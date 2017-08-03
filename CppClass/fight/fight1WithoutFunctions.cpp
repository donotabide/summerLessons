#include "header1.h"

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
  // hint --> use cin for each


  cout << "\n\nSetup Player 2" << endl;
  // To Do: get player2 Stats
  // hint --> use cin for each

  // To DO: Set both players health to a value
  // that you wish --> either random or you decide
  int player1Health; // = ?;
  int player2Health; // = ?;

  // Turns initially set to 0
  int turns = 0;

  // cout << "\n\n";
  // cout << player1Name << " - " << player1Wins << " Wins" << endl;
  // cout << "- vs. -" << endl;
  // cout << player2Name << " - " << player2Wins << " Wins" << endl;

  cout << "\n\n\nFIGHT!\n\n\n";
    // Fight Loop
    // To Do: Set conditions in loop
    // hint base it on both players health and an
    // upper limit for terms
  while (!Code here!) {
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
  // if(player1Health > player2Health)
  //   player1Wins++;
  // else player2Wins++;

  // savePlayerStats(player1Name, player1Str, player1Def, player1Armor, player1Skill, player1Wins);
  // savePlayerStats(player2Name, player2Str, player2Def, player2Armor, player2Skill, player2Wins);
}

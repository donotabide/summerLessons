#include "header1.h"

using namespace std;

void setupPlayerStats(string &name, int &str, int &def, int &armor, int &skill, int &wins);
void savePlayerStats(string name, int str, int def, int armor, int skill, int wins);

int main() {
  random_device rd;
  uniform_int_distribution<int> d6(1, 6);

  string player1Name;
  int player1Str;
  int player1Def;
  int player1Armor;
  int player1Skill;
  int player1Wins;

  string player2Name;
  int player2Str;
  int player2Def;
  int player2Armor;
  int player2Skill;
  int player2Wins;

  cout << "\n\nSetup Player 1" << endl;
  //cin.ignore();
  setupPlayerStats(player1Name, player1Str, player1Def, player1Armor, player1Skill, player1Wins);

  cout << "\n\nSetup Player 2" << endl;
  //cin.ignore();
  setupPlayerStats(player2Name, player2Str, player2Def, player2Armor, player2Skill, player2Wins);

  int player1Health = 20;
  int player2Health = 20;
  int turns = 0;

  cout << "\n\n";
  cout << player1Name << " - " << player1Wins << " Wins" << endl;
  cout << "- vs. -" << endl;
  cout << player2Name << " - " << player2Wins << " Wins" << endl;

  cout << "\n\n\nFIGHT!\n\n\n";
    // Fight Loop
  while (player1Health > 0 && player2Health > 0 && turns < 100) {
      cin.ignore();
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

      // To do: add 1 to turns

  }
  if(player1Health > player2Health)
      // Print something that says who won
  else // Print something that says who won
}

void setupPlayerStats(string &name, int &str, int &def, int &armor, int &skill, int &wins) {

    cout << "Name: ";
    //To do: set player name

    bool accepted = false;
    while (!accepted) {
        // Set max of points to be distributed
        int points;// = ?;

        /* Setting Player Stregth */
        cout << points << " points left." << endl;
        cout << "Player Str: ";
        // To do: Get player str

        // To do: Subtract str from points


        /* Setting Player Def */
        cout << points << " points left." << endl;
        cout << "Player Def: ";
        // To do: Get player def

        // To do: Subtract def from points


        /* Setting Player Armor */
        cout << points << " points left." << endl;
        cout << "Player Armor: ";
        // Get player armor

        // Subtract armor from points


        /* Setting Player Skill */
        cout << points << " points left." << endl;
        cout << "Player Skill: ";
        // Get player skill

        // Subtract player skill from points

        if (points >= 0) {
            accepted = true;
        }
        else {
            cout << "You used too many points!" << endl;
        }

    }
}

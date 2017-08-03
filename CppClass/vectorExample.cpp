#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {

    //
    vector<string> pokemons;

    pokemons.push_back("Charizard");
    pokemons.push_back("Blastoise");
    pokemons.push_back("Raichu");

    cout << "My Pokemons: " << endl;

    for (int i = 0; i < pokemons.size() ; i++){
        cout << pokemons[i] << endl;
    }

    for (string pokemon : pokemons) {
        cout << pokemon << endl;
    }
}

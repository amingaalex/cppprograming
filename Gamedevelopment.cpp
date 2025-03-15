/*Name: Alex Abere
  ADM: BSCIT-05-0063/2024
  DATE:15/03/2025
  Version 1*/

#include <iostream>
#include <string>

using namespace std;

// A) Define a player structure
struct Player {
    string name;
    int score;
    int level;
};

// B) Function to display player information
void displayPlayer(const Player& p) {
    cout << "Player Name: " << p.name << endl;
    cout << "Score: " << p.score << endl;
    cout << "Level: " << p.level << endl;
    cout << "-------------------------" << endl;
}

int main() {
    // E) User input for player details
    Player player1, player2;

    cout << "Enter details for Player 1" << endl;
    cout << "Name: ";
    getline(cin, player1.name);
    cout << "Score: ";
    cin >> player1.score;
    cout << "Level: ";
    cin >> player1.level;
    cin.ignore(); // To clear the input buffer

    cout << "\nEnter details for Player 2" << endl;
    cout << "Name: ";
    getline(cin, player2.name);
    cout << "Score: ";
    cin >> player2.score;
    cout << "Level: ";
    cin >> player2.level;
    
    // C) Display player details
    cout << "\nDisplaying Player Information:\n";
    displayPlayer(player1);
    displayPlayer(player2);

    return 0;
}

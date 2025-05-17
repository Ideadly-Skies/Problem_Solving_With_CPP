#include <iostream>
using namespace std;

int main( ){
    // store moves of each player 
    char player1, player2;
    bool isWinPlayer1, isWinPlayer2 = false; 
    int round = 1;   

    // inform players of the game
    cout << "Welcome to the rock, paper, scissors game!" << endl;
    cout << "Each player will take turns and must input:" << endl;
    cout << "   1. R - Rock" << endl;
    cout << "   2. P - Paper" << endl;
    cout << "   3. S - Scissor" << endl;
    
    // prompt to begin the game
    cout << "\nGame Begins!\n" << endl;

    while (!(isWinPlayer1 || isWinPlayer2)){
        // inform current round to players
        cout << "Round " << round << ", Fight!" << endl;
        round++;
        
        // prompt player 1 for move
        cout << "Enter a move for player 1: ";
        cin >> player1;

        // player1 inputs invalid move 
        while (player1 != 'R' && player1 != 'P' && player1 != 'S'){
            cout << "Invalid move! you have entered: " << player1 << endl;
            cout << "Moves Allowed: " << endl;
            cout << "   1. R - Rock" << endl;
            cout << "   2. P - Paper" << endl;
            cout << "   3. S - Scissor" << endl; 
            
            // reprompt player 1 for correct move
            cout << "Re-enter move for player 1: ";
            cin >> player1;
        }

        // prompt player 2 for move
        cout << "Enter a move for player 2: ";
        cin >> player2;

        // player1 inputs invalid move 
        while (player2 != 'R' && player2 != 'P' && player2 != 'S'){
            cout << "Invalid move! you have entered: " << player2 << endl;
            cout << "Moves Allowed: " << endl;
            cout << "   1. R - Rock" << endl;
            cout << "   2. P - Paper" << endl;
            cout << "   3. S - Scissor" << endl; 
            
            // reprompt player 1 for correct move
            cout << "Re-enter move for player 2: ";
            cin >> player2;
        }

        // player1 win
        if (player1 == 'R' && player2 == 'S' || 
            player1 == 'P' && player2 == 'R' || 
            player1 == 'S' && player2 == 'P' 
        ){
            isWinPlayer1 = true;
        } 

        // player2 win
        if (player2 == 'R' && player1 == 'S' ||
            player2 == 'P' && player1 == 'R' || 
            player2 == 'S' && player1 == 'P'
        ){
            isWinPlayer2 = true;
        }

        // display move made by players
        cout << "\nplayer 1 choses " << player1 << endl;
        cout << "player 2 choses " << player2 << endl;

        if (!(isWinPlayer1 || isWinPlayer2)){
            cout << "\nVerdict: It's a draw!" << endl;
            cout << "Beginning round " << round << " soon...\n" << endl;
        }
    }

    // display congratulatory message
    cout << "\n";

    if (isWinPlayer1){
        cout << "Player 1 wins!" << endl;
    }

    if (isWinPlayer2){
        cout << "Player 2 wins!" << endl;
    }

    return (0);
}
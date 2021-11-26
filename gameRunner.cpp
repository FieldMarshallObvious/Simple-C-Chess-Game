#include "Board.h"
#include "Player.h"

using namespace std;

// Global objects
Board gameBoard;
Player white;
Player black;

// Run program
int main( )
{
    
}

// Initialize game to starting state
void initializeGame( )
{    
    // Initalize players
    white = Player( 0, gameBoard );
    black = Player( 39, gameBoard );
}

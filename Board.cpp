
#include "Board.h"

// Initalizer Board
Board::Board( )
{

}

// Set specified board location to specified piece
void Board::setPos( int pos, int piece )
{
    // Get specified board location
    auto it = boardLocation.find(pos);

    // Set the new piece
    it -> second = piece;
}

// Print board state to command line 
void Board::printBoard( )
{
    for( auto it = boardLocation.cbegin(); it != boardLocation.cend(); ++it)
    {
        cout << it -> first << ": " << it -> second << endl;
    }
}

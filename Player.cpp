#include "Player.h"


Player::Player(int offset, Board curBoard)
{
    int curLocation = 0;
    // Give player all starting pieces
    for( int i = 0; i < PIECES; i++ )   
    {
        // Create new piece
        Pieces newPieces;
        curLocation++;

        // Set first second row pieces to pawns
        if( 8 <= i <= 15 )
        {
            // Set Piece type to pawn
            newPieces.changeType(PAWN);
            // Set Piece position 
            newPieces.MovePiece(curLocation+offset, curBoard);

            // Assign index to currentPiece
            curPieces[i] = newPieces;
        }
    }
}

void Player::losePiece( Pieces lostPiece )
{

}

void Player::takePiece(Pieces taken)
{

}
void Player::movePiece( Pieces piece, int pos )
{

}
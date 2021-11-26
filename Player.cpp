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

        // Set white initial back row
        if( i <= 7 )
        {
            switch (i)
            {
            case 0:
                setPieceState( ROOK, i, curLocation+offset, newPieces, curBoard);
                break;
            case 1:
                setPieceState( KNIGHT, i, curLocation+offset, newPieces, curBoard);
                break;
            case 2: 
                setPieceState( BISHOP, i, curLocation+offset, newPieces, curBoard);
                break;
            case 3:
                setPieceState( KING, i, curLocation+offset, newPieces, curBoard);
                break;
            case 4:
                setPieceState( QUEEN, i, curLocation+offset, newPieces, curBoard);
                break;
            case 5:
                setPieceState( BISHOP, i, curLocation+offset, newPieces, curBoard);
                break;
            case 6:
                setPieceState( KNIGHT, i, curLocation+offset, newPieces, curBoard);
                break;
            case 7:
                setPieceState( ROOK, i, curLocation+offset, newPieces, curBoard);
                break; 
            }
        }

        // Set white second row pieces to pawns
        else if( 8 <= i <= 15 )
        {
            setPieceState( PAWN, i, curLocation+offset, newPieces, curBoard);
        }

        // Set black second row peices to pawns
        else if(  39 <= i <= 46 )
        {
            setPieceState( PAWN, i, curLocation+offset, newPieces, curBoard);
        }

        // Set black back row initial
        else if( 47 <= i )
        {
            switch (i)
            {
            case 47:
                setPieceState( ROOK, i, curLocation+offset, newPieces, curBoard);
                break;
            case 48:
                setPieceState( KNIGHT, i, curLocation+offset, newPieces, curBoard);
                break;
            case 49: 
                setPieceState( BISHOP, i, curLocation+offset, newPieces, curBoard);
                break;
            case 50:
                setPieceState( KING, i, curLocation+offset, newPieces, curBoard);
                break;
            case 51:
                setPieceState( QUEEN, i, curLocation+offset, newPieces, curBoard);
                break;
            case 52:
                setPieceState( BISHOP, i, curLocation+offset, newPieces, curBoard);
                break;
            case 53:
                setPieceState( KNIGHT, i, curLocation+offset, newPieces, curBoard);
                break;
            case 54:
                setPieceState( ROOK, i, curLocation+offset, newPieces, curBoard);
                break; 
            }
        }
    }

    // Initialize cpiece taken
    for( int i = 0; i < STARTING_PIECES/2; i++ )
    {

    }
}

void Player::losePiece( Pieces lostPiece )
{
    for( int i = 0; i < PIECES; i++ )
    {
        // Find the location of the piece to be removed 
        // Then set it to null
        if( curPieces[i].getLocation() == lostPiece.getLocation() )
        {
            curPieces[i].changeType(-1);
            curPieces[i].changeLocation(-1);
        }
    }
}

void Player::takePiece(Pieces taken)
{
    for( int i = 0; i < PIECES; i++ )
    {
        // Find the location of the piece to be taken
        // Add it to the taken pieces array
        if( curPieces[i].getLocation() == taken.getLocation() )
        {
            // Add to to the taken list for that piece
            switch (curPieces[i].getPieceType())
            {
            case KING:
                takenMaterial[KING]+= 1;
                break;
            
            case QUEEN:
                break;
            case BISHOP:
                break;
            case KNIGHT:
                break;
            case ROOK:
                break;
            case PAWN:
                break;
            }
        }
    }
}
void Player::movePiece( Pieces piece, int pos )
{

}

void Player::setPieceState( int type, int index, int location, Pieces newPieces, Board curBoad )
{
    // Set Piece type to input
    newPieces.changeType(type);

    // Set Piece position 
    newPieces.MovePiece(location, curBoad);

    // Assign index to currentPiece
    curPieces[index] = newPieces;
}
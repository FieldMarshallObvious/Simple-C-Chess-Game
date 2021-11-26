#include "Player.h"

// Initalizer
Player::Player()
{
    // Creating new intial values
    for( int i = 0; i < PIECES; i++ )
    {
        Pieces newPiece;
        curPieces[i] = newPiece;
    }

    // Initialize piece taken array
    for( int i = 0; i < STARTING_PIECES/2; i++ )
        takenMaterial[i] = -1;
}

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
        if( i <= 7 || ( 39 <= i <= 46  ) )
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
        curPieces[i] = newPieces;
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
void Player::movePiece( Pieces piece, Board curBoard, int newPos )
{
    // Find the piece that the player is moving
    // then change it's position 
    for( int i = 0; i < STARTING_PIECES; i++ )
    {
        if( curPieces[i].getLocation() == piece.getLocation() )
            curPieces[i].MovePiece( newPos, curBoard );
        
    }
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
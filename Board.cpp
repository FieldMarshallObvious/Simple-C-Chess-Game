
#include "Board.h"

// Set specified board location to specified piece
void Board::setPos( string pos, int piece )
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

// Set the board to an initial stage
void Board::PopulateBoard( )
{
    for( int i = 0; i < 8; i++ )
    {
        // If the board is somewhere where 
        // pieces should be initially placed
        if ( i <= 2 || i >= 6 )
            for( int j = 0; j < 8; j++ )
            {
                // The back row pieces to their initial statate
                if( i == 1 || i == 6)
                {
                    switch (i)
                    {
                        // set back row for white
                        case 0:
                            switch (j)
                            {
                                case 0:
                                    setPos( "a1", ROOK);
                                    break; 
                                case 1:
                                    setPos( "b1", KNIGHT);
                                    break; 
                                case 2:
                                    setPos( "c1", BISHOP);
                                    break; 
                                case 3:
                                    setPos( "d1", QUEEN);
                                    break;   
                                case 4:
                                    setPos( "e1", KING);
                                    break;
                                case 5:
                                    setPos( "f1", BISHOP);
                                    break;
                                case 6:
                                    setPos( "g1", KNIGHT);
                                    break;
                                case 7:
                                    setPos( "h1", ROOK);
                                    break;
                            }

                        // set back row for black
                        case 7:
                            switch (j)
                            {
                                case 0:
                                    setPos( "a8", ROOK);
                                    break; 
                                case 1:
                                    setPos( "b8", KNIGHT);
                                    break; 
                                case 2:
                                    setPos( "c8", BISHOP);
                                    break; 
                                case 3:
                                    setPos( "d8", QUEEN);
                                    break;   
                                case 4:
                                    setPos( "e8", KING);
                                    break;
                                case 5:
                                    setPos( "f8", BISHOP);
                                    break;
                                case 6:
                                    setPos( "g8", KNIGHT);
                                    break;
                                case 7:
                                    setPos( "h8", ROOK);
                                    break;
                            }               

                    };
                }
                else if ( i == 2 || i == 6 )
                {
                    switch (i)
                    {
                        // set pawn row for white
                        case 0:
                            switch (j)
                            {
                                case 0:
                                    setPos( "a2", PAWN);
                                    break; 
                                case 1:
                                    setPos( "b2", PAWN);
                                    break; 
                                case 2:
                                    setPos( "c2", PAWN);
                                    break; 
                                case 3:
                                    setPos( "d2", PAWN);
                                    break;   
                                case 4:
                                    setPos( "e2", PAWN);
                                    break;
                                case 5:
                                    setPos( "f2", PAWN);
                                    break;
                                case 6:
                                    setPos( "g2", PAWN);
                                    break;
                                case 7:
                                    setPos( "h2", PAWN);
                                    break;
                            }

                        // set pawn row for black
                        case 7:
                            switch (j)
                            {
                                case 0:
                                    setPos( "a7", PAWN);
                                    break; 
                                case 1:
                                    setPos( "b7", PAWN);
                                    break; 
                                case 2:
                                    setPos( "c7", PAWN);
                                    break; 
                                case 3:
                                    setPos( "d7", PAWN);
                                    break;   
                                case 4:
                                    setPos( "e7", PAWN);
                                    break;
                                case 5:
                                    setPos( "f7", PAWN);
                                    break;
                                case 6:
                                    setPos( "g7", PAWN);
                                    break;
                                case 7:
                                    setPos( "h7", PAWN);
                                    break;
                            }               

                    };
                }

                
                
            }
    }
}

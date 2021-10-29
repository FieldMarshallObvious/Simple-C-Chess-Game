#include "Pieces.h"

void Pieces::PopulateBoard()
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
                                    currentBoard.setPos( "a1", ROOK);
                                    break; 
                                case 1:
                                    currentBoard.setPos( "b1", KNIGHT);
                                    break; 
                                case 2:
                                    currentBoard.setPos( "c1", BISHOP);
                                    break; 
                                case 3:
                                    currentBoard.setPos( "d1", QUEEN);
                                    break;   
                                case 4:
                                    currentBoard.setPos( "e1", KING);
                                    break;
                                case 5:
                                    currentBoard.setPos( "f1", BISHOP);
                                    break;
                                case 6:
                                    currentBoard.setPos( "g1", KNIGHT);
                                    break;
                                case 7:
                                    currentBoard.setPos( "h1", ROOK);
                                    break;
                            }

                        // set back row for black
                        case 7:
                            switch (j)
                            {
                                case 0:
                                    currentBoard.setPos( "a8", ROOK);
                                    break; 
                                case 1:
                                    currentBoard.setPos( "b8", KNIGHT);
                                    break; 
                                case 2:
                                    currentBoard.setPos( "c8", BISHOP);
                                    break; 
                                case 3:
                                    currentBoard.setPos( "d8", QUEEN);
                                    break;   
                                case 4:
                                    currentBoard.setPos( "e8", KING);
                                    break;
                                case 5:
                                    currentBoard.setPos( "f8", BISHOP);
                                    break;
                                case 6:
                                    currentBoard.setPos( "g8", KNIGHT);
                                    break;
                                case 7:
                                    currentBoard.setPos( "h8", ROOK);
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
                                    currentBoard.setPos( "a2", PAWN);
                                    break; 
                                case 1:
                                    currentBoard.setPos( "b2", PAWN);
                                    break; 
                                case 2:
                                    currentBoard.setPos( "c2", PAWN);
                                    break; 
                                case 3:
                                    currentBoard.setPos( "d2", PAWN);
                                    break;   
                                case 4:
                                    currentBoard.setPos( "e2", PAWN);
                                    break;
                                case 5:
                                    currentBoard.setPos( "f2", PAWN);
                                    break;
                                case 6:
                                    currentBoard.setPos( "g2", PAWN);
                                    break;
                                case 7:
                                    currentBoard.setPos( "h2", PAWN);
                                    break;
                            }

                        // set pawn row for black
                        case 7:
                            switch (j)
                            {
                                case 0:
                                    currentBoard.setPos( "a7", PAWN);
                                    break; 
                                case 1:
                                    currentBoard.setPos( "b7", PAWN);
                                    break; 
                                case 2:
                                    currentBoard.setPos( "c7", PAWN);
                                    break; 
                                case 3:
                                    currentBoard.setPos( "d7", PAWN);
                                    break;   
                                case 4:
                                    currentBoard.setPos( "e7", PAWN);
                                    break;
                                case 5:
                                    currentBoard.setPos( "f7", PAWN);
                                    break;
                                case 6:
                                    currentBoard.setPos( "g7", PAWN);
                                    break;
                                case 7:
                                    currentBoard.setPos( "h7", PAWN);
                                    break;
                            }               

                    };
                }

                
                
            }
    }
}

void Pieces::MovePiece()
{

}

void Pieces::Promote()
{

}

void Pieces::AvailableMoves(int currentPos, int Piece)
{
    switch()
}

bool Pieces::detectMovementObstacle()
{

}
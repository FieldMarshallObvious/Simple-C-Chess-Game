#include "Pieces.h"

void Pieces::PopulateBoard(Board newBoard)
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
                                    newBoard.setPos( "a1", ROOK);
                                    break; 
                                case 1:
                                    newBoard.setPos( "b1", KNIGHT);
                                    break; 
                                case 2:
                                    newBoard.setPos( "c1", BISHOP);
                                    break; 
                                case 3:
                                    newBoard.setPos( "d1", QUEEN);
                                    break;   
                                case 4:
                                    newBoard.setPos( "e1", KING);
                                    break;
                                case 5:
                                    newBoard.setPos( "f1", BISHOP);
                                    break;
                                case 6:
                                    newBoard.setPos( "g1", KNIGHT);
                                    break;
                                case 7:
                                    newBoard.setPos( "h1", ROOK);
                                    break;
                            }

                        // set back row for black
                        case 7:
                            switch (j)
                            {
                                case 0:
                                    newBoard.setPos( "a8", ROOK);
                                    break; 
                                case 1:
                                    newBoard.setPos( "b8", KNIGHT);
                                    break; 
                                case 2:
                                    newBoard.setPos( "c8", BISHOP);
                                    break; 
                                case 3:
                                    newBoard.setPos( "d8", QUEEN);
                                    break;   
                                case 4:
                                    newBoard.setPos( "e8", KING);
                                    break;
                                case 5:
                                    newBoard.setPos( "f8", BISHOP);
                                    break;
                                case 6:
                                    newBoard.setPos( "g8", KNIGHT);
                                    break;
                                case 7:
                                    newBoard.setPos( "h8", ROOK);
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
                                    newBoard.setPos( "a2", PAWN);
                                    break; 
                                case 1:
                                    newBoard.setPos( "b2", PAWN);
                                    break; 
                                case 2:
                                    newBoard.setPos( "c2", PAWN);
                                    break; 
                                case 3:
                                    newBoard.setPos( "d2", PAWN);
                                    break;   
                                case 4:
                                    newBoard.setPos( "e2", PAWN);
                                    break;
                                case 5:
                                    newBoard.setPos( "f2", PAWN);
                                    break;
                                case 6:
                                    newBoard.setPos( "g2", PAWN);
                                    break;
                                case 7:
                                    newBoard.setPos( "h2", PAWN);
                                    break;
                            }

                        // set pawn row for black
                        case 7:
                            switch (j)
                            {
                                case 0:
                                    newBoard.setPos( "a7", PAWN);
                                    break; 
                                case 1:
                                    newBoard.setPos( "b7", PAWN);
                                    break; 
                                case 2:
                                    newBoard.setPos( "c7", PAWN);
                                    break; 
                                case 3:
                                    newBoard.setPos( "d7", PAWN);
                                    break;   
                                case 4:
                                    newBoard.setPos( "e7", PAWN);
                                    break;
                                case 5:
                                    newBoard.setPos( "f7", PAWN);
                                    break;
                                case 6:
                                    newBoard.setPos( "g7", PAWN);
                                    break;
                                case 7:
                                    newBoard.setPos( "h7", PAWN);
                                    break;
                            }               

                    };
                }

                
                
            }
    }
}

void Pieces::MovePiece(Board curBoard)
{

}

void Pieces::Promote(Board curBoard)
{

}

void Pieces::AvailableMoves(Board curBoard, int currentPos, int Piece)
{
    switch()
}

bool Pieces::detectMovementObstacle()
{

}
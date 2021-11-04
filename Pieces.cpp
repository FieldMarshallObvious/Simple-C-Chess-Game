#include "Pieces.h"

// Update current piece location in attributes and on board
void Pieces::MovePiece(int newPos, Board curBoard)
{
    piece->location = newPos;
    curBoard.setPos("-1", piece->pieceType);
}

void Pieces::Promote(Board curBoard)
{

}

void Pieces::AvailableMoves(Board curBoard, int currentPos, int Piece)
{

}

bool Pieces::detectMovementObstacle()
{

}
#ifndef __PIECES_H
#define __PIECES_H
#include "Board.h"

enum PIECES { KING = 0, QUEEN = 1, BISHOP = 2, KNIGHT = 3, ROOK = 4, PAWN = 5, PIECES = 6 };

class Pieces {
    public:
        void PopulateBoard(Board newBoard);
        void MovePiece(Board curBoard);
        void Promote(Board curBoard);
        void AvailableMoves(Board curBoard, int currentPos, int piece);


    private:
        // All general piece attributes
        struct PieceType
        {
          int pieceType = -1;
          bool pinned = false;
          bool isChecked = false;
          bool isChecking = false;
          bool EnPassant = false;
          bool isStartingPos = true;
        };
        bool detectMovementObstacle();

};

#endif
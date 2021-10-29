#ifndef __PIECES_H
#define __PIECES_H
#include "Board.h"

enum PIECES { KING = 1, QUEEN = 2, BISHOP = 3, KNIGHT = 4, ROOK = 5, PAWN = 6 };

class Pieces {
    public:
        void PopulateBoard();
        void MovePiece();
        void Promote();
        void AvailableMoves(int currentPos, int piece);


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
        Board currentBoard;



};

#endif
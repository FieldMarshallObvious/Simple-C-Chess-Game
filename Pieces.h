#ifndef __PIECES_H
#define __PIECES_H

class Pieces {
    public:
        void PopulateBoard();
        void MovePiece();
        void Promote();
        void AvailableMoves();


    private:
        // All general piece attributes
        struct PieceType
        {
          int pieceType = -1;
          bool pinned = false;
          bool isChecked = false;
          bool isChecking = false;
          bool EnPassant = false;
        };
        bool detectMovementObstacle();


};

#endif
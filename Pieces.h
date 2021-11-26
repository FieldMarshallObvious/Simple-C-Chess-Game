#ifndef __PIECES_H
#define __PIECES_H
#include "Board.h"

class Pieces {
    public:
        void MovePiece(int newPos, Board curBoard);
        void Promote(Board curBoard, int PieceType);
        void AvailableMoves(Board curBoard, int currentPos, int piece);
        void changeType(int newType){ piece->pieceType = newType; }
        void changeLocation(int newLocation){ piece->location = newLocation; }
        int getPieceType( ){ return piece->pieceType; }
        int getLocation( ){ return piece->location; }


    private:
        // All general piece attributes
        struct PieceAttributes
        {
          int pieceType = -1;
          bool pinned = false;
          bool isChecked = false;
          bool isChecking = false;
          bool EnPassant = false;
          bool isStartingPos = true;
          int location = -1;

        };
        PieceAttributes *piece; 
        bool detectMovementObstacle();

};

#endif
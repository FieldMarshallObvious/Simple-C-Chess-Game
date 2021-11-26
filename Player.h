#ifndef __PLAYER_H
#define __PLAYER_H

#include <iostream>
#include "Pieces.h"

using namespace std;

class Player
{
    private:
        static const int STARTING_PIECES = 16;
        int timeRemaining;
        int curTurn;
        Pieces curPieces[STARTING_PIECES]; // array to contain the total amount of pieces a player has 
        int takenMaterial[STARTING_PIECES/2]; // array to contain the total amount of material taken
        void setPieceState( int type, int index, int location, Pieces newPiece, Board curBoad);
        

    public:
        // Initializer
        Player(int offset, Board curBoard);

        // Setter function
        void setTimeRemaining(int increment) { timeRemaining+=increment; }
        void setcurTurn(int increment) { curTurn+=increment; }
        void losePiece(Pieces lostPiece);
        void takePiece(Pieces taken);
        void movePiece( Pieces piece, int pos );


        // Getter functions 
        int getTimeRemaining() { return timeRemaining; }
        int getcurTurn() {return curTurn; }
        int getTakenMaterial ( int piece ) { return takenMaterial[piece]; }
        Pieces getPiece ( int piece ){ return curPieces[piece]; };
};

#endif
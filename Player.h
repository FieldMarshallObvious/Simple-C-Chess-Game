#ifndef __PLAYER_H
#define __PLAYER_H

#include <iostream>
#include "Pieces.h"

using namespace std;

class Player
{
    private:
        int timeRemaining;
        int curTurn;
        Pieces curPieces[PIECES]; // array to contain the total amount of pieces a player has 
        int takenMaterial[PIECES]; // array to contain the total amount of material taken
        

    public:
        // Setter functions

        // Getter functions 
        int getTimeRemaining() { return timeRemaining; }
        int getcurTurn() {return curTurn; }
        Pieces getPiece ( int index ) { return curPieces(index); }
        int getTakenMaterial ( int piece ) { return takenMaterial(piece); }

};

#endif
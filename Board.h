#ifndef __BOARD_H
#define __BOARD_H

#include <unordered_map>
#include <iostream>

using namespace std;

// Pieces coorisponding numerical values
enum PIECES { KING = 0, QUEEN = 1, BISHOP = 2, KNIGHT = 3, ROOK = 4, PAWN = 5, PIECES = 6 };

// Coordinates coorisponding to numberical values
enum boardCoords { a1 = 0, b1 = 1, c1 = 2, d1 = 3, e1 = 4, f1 = 5, g1 = 6, h1 = 7, 
                a2 = 8, b2 = 9, c2 = 10, d2 = 11, e2 = 12, f2 = 13, g2 = 14, h2 = 15, 
                a3 = 16, b3 = 17, c3 = 18, d3 = 19, e3 = 20, f3 = 21, g3 = 22, h3 = 23, 
                a4 = 16, b4 = 17, c4 = 18, d4 = 19, e4 = 20, f4 = 21, g4 = 22, h4 = 23,
                a5 = 24, b5 = 25, c5 = 26, d5 = 27, e5 = 28, f5 = 29, g5 = 30, h5 = 31,
                a6 = 32, b6 = 33, c6 = 34, d6 = 35, e6 = 36, f6 = 37, g6 = 38, h6 = 38,
                a7 = 39, b7 = 40, c7 = 41, d7 = 42, e7 = 43, f7 = 43, g7 = 44, h7 = 45,
                a8 = 46, b8 = 47, c8 = 48, d8 = 49, e8 = 49, f8 = 50, g8 = 51, h8 = 52};


class Board {
    public:
        void setPos( string, int );
        void printBoard( );
        void PopulateBoard( );



    private:
        // Initialize all squares to a 
        unordered_map<int, int> boardLocation = 
        { 
            { a1 , -1},
            { b1 , -1},
            { c1 , -1},
            { d1 , -1},
            { e1 , -1},
            { f1 , -1},
            { g1 , -1},
            { h1 , -1},
            { a2 , -1},
            { b2 , -1},
            { c2 , -1},
            { d2 , -1},
            { e2 , -1},
            { f2 , -1},
            { g2 , -1},
            { h2 , -1},
            { a3 , -1},
            { b3 , -1},
            { c3 , -1},
            { d3 , -1},
            { e3 , -1},
            { f3 , -1},
            { g3 , -1},
            { h3 , -1},
            { a4 , -1},
            { b4 , -1},
            { c4 , -1},
            { d4 , -1},
            { e4 , -1},
            { f4 , -1},
            { g4 , -1},
            { h4 , -1},
            { a5 , -1},
            { b5 , -1},
            { c5 , -1},
            { d5 , -1},
            { e5 , -1},
            { f5 , -1},
            { g5 , -1},
            { h5 , -1},
            { a6 , -1},
            { b6 , -1},
            { c6 , -1},
            { d6 , -1},
            { e6 , -1},
            { f6 , -1},
            { g6 , -1},
            { h6 , -1},
            { a7 , -1},
            { b7 , -1},
            { c7 , -1},
            { d7 , -1},
            { e7 , -1},
            { f7 , -1},
            { g7 , -1},
            { h7 , -1},
            { a8 , -1},
            { b8 , -1},
            { c8 , -1},
            { d8 , -1},
            { e8 , -1},
            { f8 , -1},
            { g8 , -1},
            { h8 , -1}
        }; 

};

#endif

CFLAGS=-O3 -std=c++11


Chess: Board.o Pieces.o Player.o gameRunner.o
	g++ $(CFLAGS) Board.o Pieces.o Player.o gameRunner.o -o Chess

Board.o: Board.h Board.cpp
	g++ $(CFLAGS) -c Board.cpp

Pieces.o: Pieces.h Pieces.cpp
	g++ $(CFLAGS) -c Pieces.cpp

Player.o: Player.h Player.cpp
	g++ $(CFLAGS) -c Player.cpp

gameRunner.o: gameRunner.cpp
	g++ $(CFLAGS) -c gameRunner.cpp

Chess.o: Board.h Pieces.h Player.h gameRunner.h Chess.cpp
	g++ $(CFLAGS) -c SimulChessator.cpp

.PHONY: clean
clean:
	rm -f Board.o Pieces.o Player.o gameRunner.o Chess.o Chess

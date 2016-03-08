// 1010solver.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "1010solver.h"
#include "board.h"
#include "piece.h"


int main()
{
	std::string input;
	std::cout << "press enter to start:\n";
	input = std::cin.get();

	Board board;
	int score = 0;
	
	board.printBoard();
	input = std::cin.get();

	/*Piece piece('2'); piece.printPiece();
	Piece piece2('3'); piece2.printPiece();
	Piece piece3('4'); piece3.printPiece();
	Piece piece4('5'); piece4.printPiece();
	Piece piece5('b'); piece5.printPiece();
	Piece piece6('c'); piece6.printPiece();
	Piece piece7('d'); piece7.printPiece();
	Piece piece8('e'); piece8.printPiece();
	Piece piece9('+'); piece9.printPiece();
	Piece piece10('#'); piece10.printPiece();
	Piece piece11('l'); piece11.printPiece();
	Piece piece12('j'); piece12.printPiece();
	Piece piece13('q'); piece13.printPiece();
	Piece piece14('r'); piece14.printPiece();
	Piece piece15('L'); piece15.printPiece();
	Piece piece16('J'); piece16.printPiece();
	Piece piece17('Q'); piece17.printPiece();
	Piece piece18('R'); piece18.printPiece();*/

	Piece piece('#');
	board.addPiece(piece, 0, 3, true);
	score += board.clearRows(true);
	board.printBoard();
	std::cout << score;
	input = std::cin.get();

	Piece piece2('#');
	board.addPiece(piece2, 3, 3, true);
	score += board.clearRows(true);
	board.printBoard();
	std::cout << score;
	input = std::cin.get();

	Piece piece3('#');
	board.addPiece(piece3, 6, 4, true);
	score += board.clearRows(true);
	board.printBoard();
	std::cout << score;
	input = std::cin.get();

	Piece piece5('c');
	board.addPiece(piece5, 9, 7, true);
	score += board.clearRows(true);
	board.printBoard();
	std::cout << score;
	input = std::cin.get();

	Piece piece6('b');
	board.addPiece(piece6, 9, 0, true);
	score += board.clearRows(true);
	board.printBoard();
	std::cout << score;
	input = std::cin.get();

	Piece piece4('e');
	board.addPiece(piece4, 9, 2, true);
	score += board.clearRows(true);
	board.printBoard();
	std::cout << score;
	input = std::cin.get();

    return 0;
}

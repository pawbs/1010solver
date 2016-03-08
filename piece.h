#pragma once
#include "stdafx.h"
#include "1010solver.h"
#include <vector>
#include <string>

class Coordinate {
public:
	int x;
	int y;
	Coordinate();
	Coordinate(int ix, int iy);
};

class Piece {
protected:
	std::vector<Coordinate> vPoints;
public:
	Piece();
	Piece(char x);
	void printPiece();
	std::vector<Coordinate> getCoordinates();
	std::string sPieceName;
	int iMaxX, iMaxY;
};
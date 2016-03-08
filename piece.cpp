#include "stdafx.h"
#include "piece.h"

Coordinate::Coordinate() {
}

Coordinate::Coordinate(int ix, int iy) {
	x = ix;
	y = iy;
}

Piece::Piece() {
}

Piece::Piece(char x) {
	sPieceName = x;
	Coordinate p1;
	switch (x) {
	case '2':
		p1.x = 0; p1.y = 0; vPoints.push_back(p1);
		p1.x = 1; p1.y = 0; vPoints.push_back(p1);
		iMaxX = 8;
		iMaxY = 9;
		break;
	case '3':
		p1.x = 0; p1.y = 0; vPoints.push_back(p1);
		p1.x = 1; p1.y = 0; vPoints.push_back(p1);
		p1.x = 2; p1.y = 0; vPoints.push_back(p1);
		iMaxX = 7;
		iMaxY = 9;
		break;
	case '4':
		p1.x = 0; p1.y = 0; vPoints.push_back(p1);
		p1.x = 1; p1.y = 0; vPoints.push_back(p1);
		p1.x = 2; p1.y = 0; vPoints.push_back(p1);
		p1.x = 3; p1.y = 0; vPoints.push_back(p1);
		iMaxX = 6;
		iMaxY = 9;
		break;
	case '5':
		p1.x = 0; p1.y = 0; vPoints.push_back(p1);
		p1.x = 1; p1.y = 0; vPoints.push_back(p1);
		p1.x = 2; p1.y = 0; vPoints.push_back(p1);
		p1.x = 3; p1.y = 0; vPoints.push_back(p1);
		p1.x = 4; p1.y = 0; vPoints.push_back(p1);
		iMaxX = 5;
		iMaxY = 9;
		break;
	case 'b':
		p1.x = 0; p1.y = 0; vPoints.push_back(p1);
		p1.x = 0; p1.y = 1; vPoints.push_back(p1);
		iMaxX = 9;
		iMaxY = 8;
		break;
	case 'c':
		p1.x = 0; p1.y = 0; vPoints.push_back(p1);
		p1.x = 0; p1.y = 1; vPoints.push_back(p1);
		p1.x = 0; p1.y = 2; vPoints.push_back(p1);
		iMaxX = 9;
		iMaxY = 7;
		break;
	case 'd':
		p1.x = 0; p1.y = 0; vPoints.push_back(p1);
		p1.x = 0; p1.y = 1; vPoints.push_back(p1);
		p1.x = 0; p1.y = 2; vPoints.push_back(p1);
		p1.x = 0; p1.y = 3; vPoints.push_back(p1);
		iMaxX = 9;
		iMaxY = 6;
		break;
	case 'e':
		p1.x = 0; p1.y = 0; vPoints.push_back(p1);
		p1.x = 0; p1.y = 1; vPoints.push_back(p1);
		p1.x = 0; p1.y = 2; vPoints.push_back(p1);
		p1.x = 0; p1.y = 3; vPoints.push_back(p1);
		p1.x = 0; p1.y = 4; vPoints.push_back(p1);
		iMaxX = 9;
		iMaxY = 5;
		break;
	case '+':
		p1.x = 0; p1.y = 0; vPoints.push_back(p1);
		p1.x = 1; p1.y = 0; vPoints.push_back(p1);
		p1.x = 0; p1.y = 1; vPoints.push_back(p1);
		p1.x = 1; p1.y = 1; vPoints.push_back(p1);
		iMaxX = 8;
		iMaxY = 8;
		break;
	case '#':
		p1.x = 0; p1.y = 0; vPoints.push_back(p1);
		p1.x = 1; p1.y = 0; vPoints.push_back(p1);
		p1.x = 2; p1.y = 0; vPoints.push_back(p1);
		p1.x = 0; p1.y = 1; vPoints.push_back(p1);
		p1.x = 1; p1.y = 1; vPoints.push_back(p1);
		p1.x = 2; p1.y = 1; vPoints.push_back(p1);
		p1.x = 0; p1.y = 2; vPoints.push_back(p1);
		p1.x = 1; p1.y = 2; vPoints.push_back(p1);
		p1.x = 2; p1.y = 2; vPoints.push_back(p1);
		iMaxX = 7;
		iMaxY = 7;
		break;
	case 'l':
		p1.x = 0; p1.y = 0; vPoints.push_back(p1);
		p1.x = 0; p1.y = 1; vPoints.push_back(p1);
		p1.x = 1; p1.y = 1; vPoints.push_back(p1);
		iMaxX = 8;
		iMaxY = 8;
		break;
	case 'j':
		p1.x = 1; p1.y = 0; vPoints.push_back(p1);
		p1.x = 0; p1.y = 1; vPoints.push_back(p1);
		p1.x = 1; p1.y = 1; vPoints.push_back(p1);
		iMaxX = 8;
		iMaxY = 8;
		break;
	case 'q':
		p1.x = 0; p1.y = 0; vPoints.push_back(p1);
		p1.x = 1; p1.y = 0; vPoints.push_back(p1);
		p1.x = 1; p1.y = 1; vPoints.push_back(p1);
		iMaxX = 8;
		iMaxY = 8;
		break;
	case 'r':
		p1.x = 0; p1.y = 0; vPoints.push_back(p1);
		p1.x = 1; p1.y = 0; vPoints.push_back(p1);
		p1.x = 0; p1.y = 1; vPoints.push_back(p1);
		iMaxX = 8;
		iMaxY = 8;
		break;
	case 'L':
		p1.x = 0; p1.y = 0; vPoints.push_back(p1);
		p1.x = 0; p1.y = 1; vPoints.push_back(p1);
		p1.x = 0; p1.y = 2; vPoints.push_back(p1);
		p1.x = 1; p1.y = 2; vPoints.push_back(p1);
		p1.x = 2; p1.y = 2; vPoints.push_back(p1);
		iMaxX = 7;
		iMaxY = 7;
		break;
	case 'J':
		p1.x = 2; p1.y = 0; vPoints.push_back(p1);
		p1.x = 2; p1.y = 1; vPoints.push_back(p1);
		p1.x = 2; p1.y = 2; vPoints.push_back(p1);
		p1.x = 1; p1.y = 2; vPoints.push_back(p1);
		p1.x = 0; p1.y = 2; vPoints.push_back(p1);
		iMaxX = 7;
		iMaxY = 7;
		break;
	case 'Q':
		p1.x = 0; p1.y = 0; vPoints.push_back(p1);
		p1.x = 1; p1.y = 0; vPoints.push_back(p1);
		p1.x = 2; p1.y = 0; vPoints.push_back(p1);
		p1.x = 2; p1.y = 1; vPoints.push_back(p1);
		p1.x = 2; p1.y = 2; vPoints.push_back(p1);
		iMaxX = 7;
		iMaxY = 7;
		break;
	case 'R':
		p1.x = 0; p1.y = 0; vPoints.push_back(p1);
		p1.x = 1; p1.y = 0; vPoints.push_back(p1);
		p1.x = 2; p1.y = 0; vPoints.push_back(p1);
		p1.x = 0; p1.y = 1; vPoints.push_back(p1);
		p1.x = 0; p1.y = 2; vPoints.push_back(p1);
		iMaxX = 7;
		iMaxY = 7;
		break;
	}
}

void Piece::printPiece() {
	std::string piece = std::string(25, '.');

	for (Coordinate p : vPoints) {
		int coordinate = p.y * 5 + p.x;
		piece.replace(p.y * 5 + p.x, 1, sPieceName);
	}

	std::cout << "  " << piece.substr(0, 5) << "\n";
	std::cout << "  " << piece.substr(5, 5) << "\n";
	std::cout << "  " << piece.substr(10, 5) << "\n";
	std::cout << "  " << piece.substr(15, 5) << "\n";
	std::cout << "  " << piece.substr(20, 5) << "\n";

	std::cout << "\n\n";

}

std::vector<Coordinate> Piece::getCoordinates() {
	return vPoints;
}

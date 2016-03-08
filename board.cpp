#include "stdafx.h"
#include "board.h"


Board::Board() {
	sData = std::string(100, '.');
}

void Board::printBoard() {
	std::cout << "  ";
	for (char &c : sData) {
		std::cout << c;
		if ((&c - &sData[0] + 1) % 10 == 0) { std::cout << "\n  "; }
	}
}

/*	bApply: if true, will add the piece to the board. if false, does nothing
	return: true if the piece collides with the board (doesnt fit, out of range etc..)
*/
bool Board::addPiece(Piece piece, int iPosX, int iPosY, bool bApply) {
	bool collision = false;

	if (iPosX > piece.iMaxX || iPosY > piece.iMaxY) {
		collision = true;
		return collision;
	}

	for (Coordinate p : piece.getCoordinates()) {
		if (sData.substr((iPosY + p.y) * 10 + (iPosX + p.x), 1) != ".") {
			collision = true;
			break;
		}
	}

	if (collision || !bApply) return collision;

	for (Coordinate p : piece.getCoordinates()) {
		sData.replace((iPosY + p.y) * 10 + (iPosX + p.x), 1, piece.sPieceName);
	}

	return collision;
}

/*	bApply: if true, will clear the full rows in the board. if false, does nothing
return: returns blocks cleared (overlapped Y and X rows are counted twice)
*/
int Board::clearRows(bool bApply) {
	
	std::vector<int> vClearedXRows;
	std::vector<int> vClearedYRows;

	int iScoreCount = 0;
	bool bClear;
	//check xrows
	for (int y = 0; y < 10; y++) {
		bClear = true;
		for (int x = 0; x < 10; x++) {
			if (sData.substr(y * 10 + x, 1) == ".") {
				bClear = false;
				break;
			}
		}
		if (bClear) {
			iScoreCount += 10;
			vClearedXRows.push_back(y);
		}
	}

	//check yrows
	for (int x = 0; x < 10; x++) {
		bClear = true;
		for (int y = 0; y < 10; y++) {
			if (sData.substr(y * 10 + x, 1) == ".") {
				bClear = false;
				break;
			}
		}
		if (bClear) {
			iScoreCount += 10;
			vClearedYRows.push_back(x);
		}
	}

	if (bApply) {
		for (int y : vClearedXRows) {
			sData.replace(y * 10, 10, "..........");
		}

		for (int x : vClearedYRows) {
			for (int y = 0; y < 10; y++) {
				sData.replace(y * 10 + x, 1, ".");
			}
		}
	}

	return iScoreCount;
}
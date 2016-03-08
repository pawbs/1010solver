#pragma once
#include "stdafx.h"
#include "1010solver.h"
#include "piece.h"
#include <vector>

class Board {
protected:
	std::string sData;
public:
	Board();
	void printBoard();
	bool addPiece(Piece piece, int iPosX, int iPosY, bool bApply);
	int clearRows(bool bApply);
};
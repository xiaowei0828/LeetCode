
#include <stdio.h>
#include "RemoveDuplicate.h"
#include "RotateArray.h"
#include "Intersect.h"
#include "PlusOne.h"
#include "MoveZero.h"
#include "Sudoku.h"
#include "RotateImage.h"

int main(int argc, char* argv[])
{

	vector<vector<int>> image = {
		{5, 1, 9, 11},
		{2, 4, 8, 10},
		{13, 3, 6, 7},
		{15, 14, 12, 16}
	};
	RotateImage rotateImg;
	rotateImg.rotate(image);

	vector<vector<char>> sudoku = {
		{ '5', '3', '.', '.', '7', '.', '.', '.', '.'},
		{'6', '.', '.', '1', '9', '5', '.', '.', '.'},
		{'.', '9', '8', '.', '.', '.', '.', '6', '.'},
		{'8', '.', '.', '.', '6', '.', '.', '.', '3'},
		{'4', '.', '.', '8', '.', '3', '.', '.', '1'},
		{'7', '.', '.', '.', '2', '.', '.', '.', '6'},
		{'.', '6', '.', '.', '.', '.', '2', '8', '.'},
		{'.', '.', '.', '4', '1', '9', '.', '.', '5'},
		{'.', '.', '.', '.', '8', '.', '.', '7', '9'}
	};

	Sudoku soduko;
	bool valid = soduko.isValidSudoku(sudoku);
}
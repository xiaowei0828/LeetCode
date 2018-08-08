#include <vector>
#include <unordered_set>
using namespace std;

class Sudoku {
public:
	bool isValidSudoku(vector<vector<char>>& board) 
	{
		unordered_set<char> row_set;
		unordered_set<char> column_set;

		for (size_t i = 0; i < board.size(); i++)
		{
			char temp;
			row_set.clear();
			column_set.clear();
			for (size_t j = 0; j < board[i].size(); j++)
			{
				if ( (i + 1) % 3 == 0 && (j + 1) % 3 == 0)
				{
					unordered_set<char> square_set;
					for (size_t i1 = i - 2; i1 <= i; i1++)
					{
						for (size_t j1 = j - 2; j1 <= j; j1++)
						{
							temp = board[i1][j1];
							if (temp != '.')
							{
								if (square_set.find(temp) != square_set.end())
									return false;

								square_set.insert(temp);
							}
						}
					}
				}

				temp = board[i][j];
				if (temp != '.')
				{
					if (row_set.find(temp) != row_set.end())
						return false;
					row_set.insert(temp);
				}

				temp = board[j][i];
				if (temp != '.')
				{
					if (column_set.find(temp) != column_set.end())
						return false;
					column_set.insert(temp);
				}
			}
		}
		return true;
	}
	
};
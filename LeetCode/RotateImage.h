#include <vector>
using namespace std;

class RotateImage {
public:
	void rotate(vector<vector<int>>& matrix) 
	{
		int level = matrix.size() / 2;
		int count = matrix.size() - 1;
		for (int i = 0; i < level; i++)
		{
			for (int j = 0; j < count; j++)
			{
				int row = i;
				int column = i + j;
				int pre = matrix[row][column];
				for (int k = 0; k < 4; k++)
				{
					int temp_row = row;
					row = column;
					column = matrix.size() - temp_row - 1;
					int temp = matrix[row][column];
					matrix[row][column] = pre;
					pre = temp;
				}
			}
			count -= 2;
		}
	}
};
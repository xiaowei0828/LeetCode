#include <vector>
using namespace std;

class YanghuiTriangle {
public:
	vector<vector<int>> generate(int numRows) {
		vector<vector<int>> result;
		if (numRows <= 0)
			return result;
		if (numRows == 1)
		{
			vector<int> row = { 1 };
			result.push_back(row);
			return result;
		}

		vector<int> row = { 1 };
		result.push_back(row);
		row.push_back(1);
		result.push_back(row);

		for (int i = 3; i <= numRows; i++)
		{
			vector<int> pre = result[i - 2];
			vector<int> row;
			for (int j = 0; j < i; j++)
			{
				if (j == 0 || j == i -1)
					row.push_back(1);
				else
					row.push_back(pre[j - 1] + pre[j]);

			}
			result.push_back(row);
		}

		return result;
	}
};
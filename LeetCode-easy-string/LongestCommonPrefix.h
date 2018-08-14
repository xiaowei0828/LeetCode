#include <string>
#include <vector>

using namespace std;

class LongestCommonPrefix {
public:
	string longestCommonPrefix(vector<string>& strs) 
	{
		if (strs.empty())
		{
			return "";
		}

		string& temp = strs[0];
		size_t index = 0;
		for (index = 0; index < temp.size(); index++)
		{
			for (size_t i = 1; i < strs.size(); i++)
			{
				if (strs[i][index] != temp[index])
				{
					return temp.substr(0, index);
				}
			}
		}
		return temp.substr(0, index);
	}
};
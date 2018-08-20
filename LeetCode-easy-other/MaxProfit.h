#include <vector>
using namespace std;

class MaxProfit {
public:
	int maxProfit(vector<int>& prices) {
		int max_profit = 0;
		int buy = INT_MAX;
		for (int i = 0; i < prices.size(); i++)
		{
			buy = prices[i] < buy ? prices[i] : buy;
			int profit = prices[i] - buy;
			max_profit = profit > max_profit ? profit : max_profit;
		}
		return max_profit;
	}
};
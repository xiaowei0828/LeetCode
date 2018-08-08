


int maxProfit(int* prices, int pricesSize)
{
	int temp = 0;
	for (int i = 1; i < pricesSize; i++)
	{
		int profit = prices[i] - prices[i - 1];
		if (profit > 0)
			temp += profit;
	}
	return temp;
}
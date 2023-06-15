class Solution {
public:
  int maxProfit(vector<int>& prices)
	{
   int max = 0,x=1,y=0;
	int* Buy=&y;
	int* Sell=&x;
	
	while ((*Sell < prices.size())) {

		if (prices[*Buy] < prices[*Sell]) {

			if (prices[*Sell] - prices[*Buy] > max)
				max = prices[*Sell] - prices[*Buy];
		}
		else
			*Buy = *Sell;

		(*Sell)++;
	}
	if (max == 0)
		return 0;
	else
		return max;
	}
};
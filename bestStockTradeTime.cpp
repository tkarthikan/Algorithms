#include <iostream>
#include <vector>

class Solution {
public:
    int maxProfit(std::vector<int>& prices) {
        int n = prices.size();
        int min = prices[0];
        int max = prices[n-1];
        int profit = 0;
        int minIndex = 0;
        int maxIndex = n-1;
        
        for (int i=0; i<prices.size(); i++)
        {
            if ((max<=prices[i])&&(i>minIndex))
            {
                max = prices[i];
                maxIndex = i;
                std::cout<<maxIndex<<" Max: "<<max<<std::endl;
            }

            if ((min>prices[i])&&(i<maxIndex))
            {
                min = prices[i];
                minIndex = i;
                std::cout<<minIndex<<" Min: "<<min<<std::endl;
            }
        }
        
        profit = max - min;
        if ((profit>=0)&&(max>0))
            return profit;
        else
            return 0;
    }
};

int main()
{
	Solution sol;
	std::vector<int> v1;
	int vals[] = {2,1,2,1,0,1,2};
    for (int i=0; i<sizeof(vals)/sizeof(int); i++)
    {
        v1.push_back(vals[i]);
    }
	int vout = sol.maxProfit(v1);
	
	std::cout << "profit "<<vout<<std::endl;
	return 0;
}

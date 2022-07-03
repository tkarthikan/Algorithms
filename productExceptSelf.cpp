#include <iostream>
#include <vector>

class Solution 
{
public:
	std::vector<int> productES(std::vector<int>&nums)
	{	
		const int n = nums.size();
		int product = 1;
		
		std::vector<int> pref_product = {1};
		for (int x:nums)
		{
			pref_product.push_back(pref_product.back()*x);
		}
		
		std::vector<int> suf_product(n+1);
		suf_product[n] = 1;
		for (int i =n-1; i>=0; --i){
			suf_product[i] = suf_product[i+1] * nums[i];
		}
		
		std::vector<int> sol(n);
		for (int i=0; i<n; i++)
		{
			sol[i] = pref_product[i]*suf_product[i+1];
		}

		return sol;
	}
};

int main()
{
	Solution sol;
	std::vector<int> v1 = {5,2,3,4,5};
	//int vals[] = {1,2,3,4,5};
	std::vector<int> vout = sol.productES(v1);
	
	for (int i=0; i<vout.size(); i++)
	{
		//v1.push_back(vals[i]);
		std::cout<<vout[i]<<", ";
	}
	
	std::cout << "  Done"<< std::endl;
	return 0;
}

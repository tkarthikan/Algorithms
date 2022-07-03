#include <iostream>
#include <vector>

class Solution {
public:
    bool isAnagram(std::string s, std::string t) {
        int ns = s.size();
        int nt = t.size();
        std::cout<<(ns)<<std::endl;
        const int chars = 256;
        int count[256] = {0};
        if (ns!=nt)
            return false;
        
        for (int i=0; i<ns; i++)
        {
            std::cout<<(s[i]&&t[i])<<std::endl;

            count[s[i]]++;
            count[t[i]]--;
        }
        
        for (int x:count)
        {
            if (x>0)
                return false;
        }
        return true;
    }
};

int main()
{
	Solution sol;

    std::string s = "rat";
    std::string t = "tar";

	bool vout = sol.isAnagram(s,t);
	
	std::cout << "Valid? "<<vout<<std::endl;
	return 0;
}

#include <iostream>
#include <vector>

#include <map>
#include <unordered_map>

struct CityRecord 
{
    std::string Name;
    uint64_t Population;
};

int main()
{
    std::map<std::string, CityRecord> cityMap;

    cityMap["Berlin"] = CityRecord{"berlin", 200};

}
#ifndef CITY_H
#define CITY_H
#include <map>
#include <string>
#include <vector>
#include <algorithm>

// Base struct of City 
// Subsequent City classes will inherit from this struct

namespace World {
    typedef std::map<std::string, int> FreqMap;
    struct City {
        FreqMap cityInventory;
        City(const std::vector<std::string>& inv);
        void invRemoveItem(const std::string& item);
        void invAddItem(const std::string& item);
        virtual void visitLandMark() = 0;
        virtual void goShopping() = 0;
    };
}



#endif
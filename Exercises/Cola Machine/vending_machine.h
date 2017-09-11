#ifndef VENDING_MACHINE_H
#define VENDING_MACHINE_H

#include <map>
#include <string>
#include <iostream>

typedef std::map <int,std::string> IndexToBeverage;
typedef std::pair<int,std::string> IndexBeveragePair;

class VendingMachine {
private:
    // Beverage type container
    IndexToBeverage beverages;
        
    // Default constructor populates stock beverages
public:
    VendingMachine()
    {
        // Adding beverages onto a map guarantees unique indexes, and will also
        // sort over a standard iterator.
        beverages.insert(IndexBeveragePair(1, "Coke"));
        beverages.insert(IndexBeveragePair(2, "Sprite"));
        beverages.insert(IndexBeveragePair(3, "Pepsi"));
        beverages.insert(IndexBeveragePair(4, "Mountain Dew"));
        beverages.insert(IndexBeveragePair(5, "Dr. Pepper"));
    }
    
    void listBeverages(void)
    {
        std::cout << "Please select a beverage:\n\n";
        IndexToBeverage::iterator it = beverages.begin();
        IndexToBeverage::iterator et = beverages.end();
        for (;it != et; ++it)
        {
            std::cout << it->first << "] " << it->second << std::endl;
        }
    }
    
    void vendBeverage(int choice)
    {
        IndexToBeverage::iterator it = beverages.find(choice);
        IndexToBeverage::iterator et = beverages.end();
        
        // Safeguard against out-of-bounds choices
        if (it == et)
        {
            std::cout << "Error. choice was not valid, here is your money back.\n";
            return;
        }
        
        std::cout << "Excellent choice! Enjoy your cool, refreshing " << it->second << "!\n";
    }    
};

#endif /* VENDING_MACHINE_H */

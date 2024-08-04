//
//  Inventory_item.hpp
//  Cash Register real
//
//  Created by Gerald Shimo on 5/9/24.
//

#ifndef Inventory_item_hpp
#define Inventory_item_hpp

#include <stdio.h>
#include <iostream>
#include <string>

class InventoryItem {
private:
    std::string description;
    double cost;
    int units;

public:
    
    InventoryItem() : description(""), cost(0.0), units(0) {}

    
    InventoryItem(std::string desc) : description(desc), cost(0.0), units(0) {}
    
    
    InventoryItem(std::string desc, double c, int u) : description(desc), cost(c), units(u) {}

    
    void setDescription(std::string d) { description = d; }
    void setCost(double c) { cost = c; }
    void setUnits(int u) { units = u; }
    
    
    std::string getDescription() const { return description; }
    double getCost() const { return cost; }
    int getUnits() const { return units; }

    // Function to update the inventory
    void updateUnits(int purchased) {
        if (units >= purchased) {
            units -= purchased;
        } else {
            std::cout << "Not enough units in stock.\n";
        }
    }
};

#endif /* Inventory_item_hpp */

//
//  Cash_Register.hpp
//  Cash Register real
//
//  Created by Gerald Shimo on 5/9/24.
//

#ifndef Cash_Register_hpp
#define Cash_Register_hpp

#include <stdio.h>
#include <iostream>
#include <string>
#include "Inventory_item.hpp"
class CashRegister {
private:
    InventoryItem item;
    int quantity;

public:
    CashRegister(const InventoryItem &item, int quantity) :
    item(item), quantity(quantity) {}

    void processTransaction() {
        if (quantity < 0) {
            std::cout << "Invalid quantity. Cannot be negative.\n";
            return;
        }

        double cost = item.getCost();
        double unitPrice = cost * 1.30; // Adding 30% profit
        double subtotal = unitPrice * quantity;
        double tax = subtotal * 0.06; // 6% sales tax
        double total = subtotal + tax;

        item.updateUnits(quantity); // Subtract the purchased quantity from inventory

        std::cout << "Purchase Subtotal: $" << subtotal << "\n";
        std::cout << "Tax: $" << tax << "\n";
        std::cout << "Total: $" << total << "\n";
    }
};
#endif /* Cash_Register_hpp */

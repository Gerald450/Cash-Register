//
//  main.cpp
//  Cash Register real
//
//  Created by Gerald Shimo on 5/9/24.
//
#include "Inventory_item.hpp"
#include "Cash_Register.hpp"
#include <iostream>
#include <string>
using namespace std;
int main() {
    string description;
    double cost;
    int units;
    int quantity;

    cout << "Enter item description: ";
    getline(std::cin, description);
    cout << "Enter item cost: ";
    cin >> cost;
    cout << "Enter item units in stock: ";
    cin >> units;

    InventoryItem item(description, cost, units);

    cout << "Enter quantity to purchase: ";
    cin >> quantity;

    CashRegister register1(item, quantity);

    register1.processTransaction();

    return 0;
}

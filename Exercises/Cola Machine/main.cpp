/**
 * Cola Machine - Beginner Exercise from cplusplus.com
 * 
 * Write a program that presents the user w/ a choice of your 5 favorite
 * beverages (Coke, Water, Sprite, ... , Whatever).
 * 
 * Then allow the user to choose a beverage by entering a number 1-5.
 * Output which beverage they chose.
 *
 * ★ If you program uses if statements instead of a switch statement, modify it 
 * to use a switch statement.
 * 
 * If instead your program uses a switch statement, modify it to use if/else-if 
 * statements.
 * 
 * ★★ Modify the program so that if the user enters a choice other than 1-5 then
 * it will output "Error. choice was not valid, here is your money back."
 */

#include <iostream>
#include "vending_machine.h"

using namespace std;

int main(void)
{
    // The Vending Machine Class holds beverage types and accessors
    VendingMachine vendingMachine;
    
    // Present all available options to the user
    vendingMachine.listBeverages();
    
    // Retrieve user input
    cout << "\n >> ";
    int choice = 0;
    cin >> choice;
    cout << endl;
    
    // Vend the beverage based on choice, validation enforced
    vendingMachine.vendBeverage(choice);
    
    return 0;
}

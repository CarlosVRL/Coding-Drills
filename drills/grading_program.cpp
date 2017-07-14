/*
 * Write a program that allows the user to enter the grade scored in a programm-
 * ing class  (0-100).  If the user  scored a 100 then notify the user that they
 * got a perfect score.
 * 
 * * Modify the program  so that if the user scored a 90-100 it informs the user 
 *   that they scored an A
 * 
 * ** Modify the program so that it will notify the user of their letter grade
 * 
 * Start: 1:50 PM
 * Stop:  2:15 PM ***
 */

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <limits>
#include <cmath>

using namespace std;

ofstream fout("output.txt");

int main(int argc, char *argv[])
{
    int a;
    
    cout << "Please enter your programming grade: ";
    
    // Input Guard
    while ( !(cin >> a) ) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input. Try again: ";
    }
    
    // Limit Guard
    while (true) {
        
        if (a > 100 || a < 0)
            cout << "Grade must be between 0 and 100. Try again: ";
        else
            break;
        
        cin >> a;
    }
    
    /* does not protect against implicit character conversion or rounding */
    
    // perfect score
    if (a == 100)
        cout << "You got a perfect score!\n";
    
    // letter grade distribution
    if (a >= 90)
        cout << "A\n";
    else if (a >= 80)
        cout << "B\n";
    else if (a >= 70)
        cout << "C\n";
    else if (a >= 60)
        cout << "D\n";
    else if (a < 60 && a >= 0)
        cout << "F\n";

    // writes to "output.txt"
    fout << a;
    
    return 0;
}

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
 * Start: 1:27 PM
 * Stop: 1:35
 * *
 * **
 */

#include <iostream>
#include <fstream>

using namespace std;

ofstream fout("output.txt");

int main(int argc, char *argv[])
{
    int a;
    cout << "Please enter your programming grade: ";
    cin >> a;
    
    if (a == 100)
        cout << "You got a perfect score!\n";
    
    fout << a;
    
    return 0;
}

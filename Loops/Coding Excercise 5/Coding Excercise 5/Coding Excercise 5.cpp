// Coding Excercise 5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cassert>
#include <iomanip>


using namespace std;

int main()
{
    // PART 1
    /*
    int x = 1; // This example is called a "Counter Control Loop"

    while (x < 10) {  // The loop statement will output 1 to 9, then stop looping since it is outside of the statement
        cout << x << " ";
        x++;

    }

    cout << "After the Loop\n";
    */
    // ------------------------PART 2--------------------------------------
    /*
    int x = 0; // A way to execut input validation, it will repeat until the user input falls between the statement rules

    while (x < 1 || x > 10) {

        cout << "Enter an integer between 1 and 10: ";
        cin >> x;

    }

    cout << "After the Loop.\n";
    */
    //------------------------------ PART 3----------------------------------
    /*
    int x = 5;

    while (x <= 15) {
        cout << x++ << " ";

    }
    */
    // ------------------------------PART 4------------------------------------
    /*
    int lower, upper, x;

    cout << "Enter an integer between 0 and 10: ";
    cin >> lower;
    cout << "Enter an integer between 11 and 20: ";
    cin >> upper;

    while (lower < 0 || lower < 10) { // Repeat while input is invalid

        cout << "Enter an integer between 0 and 10: ";
        cin >> lower;
    }

    while (upper < 11 || upper > 20) { // Repeat while input is invalid

        cout << "Enter an integer between 11 and 20: ";
        cin >> upper;

    }

    // Even Numbers
    x = lower;  
    if (x % 2 == 1) x++; 

    while (x <= upper) {

        cout << x << " ";

        x += 2; 
    }
    */

    // ------------------------------ PART 5 ----------------------------------------------------------------
    
   /*
    for (int x = 2; x <= 1000; x += 2) { // This allows multiple predefined iterations. Do not use this if you need user input.
        cout << x << " ";
   }
   */

    for (int x = 1; x <= 16; x++) {
        cout << setw(3) << x; 
        if (x % 4 == 0) cout << endl; 
    }
    
    // ----------------------------

    for (int x = 1; x <= 1000; x += 2) {

    }
    
    return 0;

}



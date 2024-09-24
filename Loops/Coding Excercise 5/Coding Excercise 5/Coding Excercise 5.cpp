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
    
    int x = 1; // This example is called a "Counter Control Loop"

    while (x < 10) {  // The loop statement will output 1 to 9, then stop looping since it is outside of the statement
        cout << x << " ";
        x++;

    }

    cout << "After the Loop\n";
    
    // ------------------------PART 2--------------------------------------
    
    int x = 0; // A way to execut input validation, it will repeat until the user input falls between the statement rules

    while (x < 1 || x > 10) {

        cout << "Enter an integer between 1 and 10: ";
        cin >> x;

    }

    cout << "After the Loop.\n";
    
    //------------------------------ PART 3----------------------------------
    
    int x = 5;

    while (x <= 15) {
        cout << x++ << " ";

    }
    
    // ------------------------------PART 4------------------------------------
    
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
    

    // ------------------------------ PART 5 ----------------------------------------------------------------
    
   
    for (int x = 2; x <= 1000; x += 2) { // This allows multiple predefined iterations. Do not use this if you need user input.
        cout << x << " ";
   }
   
    // ------------------------------
    
    for (int x = 1; x <= 16; x++) {
        cout << setw(3) << x; 
        if (x % 4 == 0) cout << endl; 
    }
    
    // ----------------------------

    for (int x = 1; x <= 1000; x += 2) {

    }
    */

    // ------------------------------- PART 6 -------------------------------------------------------------------

   
    int num;

    cout << "Enter an integer: ";
    cin >> num;

    for (int x = 1; x <= num; x++) {
        
        if (x % 3 == 0 && x % 5 == 0) {
            cout << "FizzBuzz ";
        }
        
        else if (x % 3 == 0) {
            cout << "Fizz ";
        }
       
        else if (x % 5 == 0) {
            cout << "Buzz ";
        }
        
        else {
            cout << x << " ";
        }
    }
    

    // ------------------------------------------- PART 7 -------------------------------------------------------------

        // Using for Loops for any number amount of entered integers.
        // USE FOR ASSIGNMENT

   double num = 0, avg, champ = 0, total = 0, x = 0;

   while (num >= 0) {
   
   cin >> num; // Place cin within the while loop since it's a line of numbers, and so it won't stop at the first inputted integer

     if (num < 0){ // This part skips over the numbers that are < 0
        break;
    }

    total += num; // This part tells the program to add each of the accepted input values and set it equal to a variable called "total" 
   

    if (num > champ) { // This part tells the program to assign the higest value to the variable "champ" 
        champ = num;
    }

      x++; // This tells the program to increment x by 1 with each iteration (run) of this while loop
 }

 avg = total / x; // Since this calculation is based on the total of the inputted integers divided by the number of iterations ran, this calculation should be outside of the while loop!

  cout << champ << " ";
  cout << fixed << setprecision(2) << avg << endl;

 return 0;
}
    
// INPUT: 15 20 0 3 -1
//OUTPUT: 20 9.50

// -------------------------------------- PART 8 --------------------------------------------------------------------------------

        // Do...While Loops
/*
    int num;

    do {// For this excercise, we want to get the number first, THEN check the condition. If it's not valid, then repeat.

        cout << "Enter an integer (1-100): ";
        cin >> num; 

    } while (num < 1 || num > 100);
    */

// ---------------------------------------------                    -------------------------------------------------------------------
        // Complex Do...While Statments 


    int choose, num1, num2, result; 

    do {
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Exit\n";
        cout << "Enter an operation (1-4): ";
        cin >> choose; 

        if (choose > 5 || choose < 1) { 
            cout << "Invalid selection!" << endl;
        }

        else {
            cout << "Enter two integers: ";
            cin >> num1 >> num2;

            cout << " " << endl; // Space 

            if (choose == 1) {
                result = num1 + num2;
                cout << num1 << " + " << num2 << " = " << result;
            }
            else if (choose == 2) {
                result = num1 - num2;
                cout << num1 << " - " << num2 << " = " << result;
            }
            else if (choose == 3) {
                result = num1 * num2;
                cout << num1 << " * " << num2 << " = " << result;
            }
            else if (choose == 4) {
                result = num1 / num2;
                cout << num1 << " / " << num2 << " = " << result;
            }
            else if (choose == 5) {
                break;
            }

        }
    } while (choose != 5); 
    

    return 0;




}



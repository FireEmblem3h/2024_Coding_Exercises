// Coding Excercises 5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <string>
#include <cassert> //This is to check or cert that a statement is correct

using namespace std;

int main()
{
    /*
    int score;
    char letter = 'F';
   

    cout << "Enter a score: ";
    cin >> score; 


    if (score >= 60) {

        cout << "You passed!" << endl;
        letter = 'P';

   }
    else {



    }

    cout << "Your letter grade is " << letter << endl;
    cout << "End of Program." << endl;
    
    */

 // -----------------------------------------------------------------------------------------------------------------

    /*int num1, num2;

    cout << "Enter two integers: ";
    cin >> num1 >> num2;    

    if (num1 > num2){ 

        cout << "The first integer, " << num1 << ", is larger." << endl; 

    }
    else {

        cout << "The second integer, " << num2 << ", is larger." << endl; 

    }
    */

 // ----------------------------------------------------------------------------------------------------------------------

    /*
    int num1;

    cout << "Enter an integer: ";
    cin >> num1; 

    if (num1 % 2 == 0) cout << "The integer is even! " << endl;
    else cout << "The integer is odd! " << endl; 
    */

 // ---------------------------------------------------------------------------------------------------------------------

    /*
    int age;

    cout << "Enter an age: ";
    cin >> age; 

    if (age >= 70 || age <= 10) cout << "You are eligible for a discount!" << endl;
    else cout << "We're sorry, you are not eligible for the discount." << endl; 
    */

 // -----------------------------------------------------------------------------------------------------------------------

    /*
    char letter; 

    cout << "Enter a character: ";
    cin >> letter; 

    if (letter >= 65 && letter <= 90) {
        cout << "That's an upper-case letter!" << endl;
    }
    else if (letter >= 97 && letter <= 122) {
        cout << "That is a lower-case letter!" << endl;
    }
    else if (letter >= '1' && letter <= '9') {
        cout << "That is a number!" << endl; 
    }
    */

 // -------------------------------------------------------------------------------------------------------------------------

    /*int num1, num2, choose;
    double result; 

    cout << "1. Addition\n"; 
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division (Quotient)\n";
    cout << "Select an operation (1-4): "; 
    cin >> choose;

    cout << " " << endl; //Space

    if (choose > 4 || choose < 1) {
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

    }
    */   

// --------------------------------------------------------------------------------------------------------------------------

   /*
    int score; 

    cout << "Enter a score: ";
    cin >> score;

    cout << " " << endl; 

    if (score >= 90) cout << "A" << endl;   
    else if (score >= 80) cout << "B" << endl; // else-if stamtents are a selection of options where only ONE of them is true.
    else if (score >= 70) cout << "C" << endl;
    else if (score >= 60) cout << "D" << endl;
    else cout << "F" << endl; // else statements will always be associated with the most recent if statement
    */

// ---------------------------------------------------------------------------------------------------------------------------------

   /* int temp;

    cout << "Enter a temp: " << endl;
    cin >> temp;

    if (temp >= 50) {
        if (temp >= 80) {
            cout << "Great day for swimming!" << endl;
        }
        else {
            cout << "Great day for soccer!" << endl;
        }
    
    }
    else if (temp >= 40) { 
        cout << "Great day for running!" << endl;
    }
    */

 // -----------------------------------------------------------------------------------------------------------
    /*
    int quantity;

    cout << "Type a numeracal value: ";
    cin >> quantity;

    cout << endl << ((quantity > 1) ? "Items" : "Item") << endl;    

    */

// ---------------------------------------------------------------------------------------------------------------

/*
    char letter;

    cout << "Enter a letter grade: ";
    cin >> letter;

    switch (letter) {
    case 'A':
        cout << "90 - 100\n";
        break;
    case 'B':
        cout << "80 - 89\n";
        break;
    case 'C':
        cout << "70 - 79\n";
        break;
    case 'D':
        cout << "60 - 69\n";
        break;
    default: 
        cout << "Less than 60\n";
    }
    */

// -----------------------------------------------------------------------------------------------------------------------------

/*
    char letter;

    cout << "Enter a letter grade: ";
    cin >> letter;

    assert (letter >= 'A' && letter <= 'D' || letter == 'F'); //This will check if the input is valid and give a popup if it's not.
*/

// --------------------------------------------------------------------------------------------------------------------------------

// PART 1
/**
    int num1, num2, num3;

    cout << "Enter 3 numbers: ";
    cin >> num1 >> num2 >> num3;

    if (num1 > num2 && num1 > num3) cout << endl << num1 << " is the largest value.\n";
    else if (num2 > num3) cout << num2 << endl << " is the largest value.\n"; 
    else cout << endl << num3 << " is the largest value.\n"; 
*/

// PART 2
   /*
    int score;  

    switch (score / 10) {  
    case  10:
    case  9: 
        cout << "A\n";
        break;
    case  8:
        cout << "B\n";
        break;
    case  7:
        cout << "C\n";
        break;
    case  6:
        cout << "D\n";
        break;
    default:
        cout << "F\n";

    }
    */

// PART 3
/*
    double price;

    cout << "Enter the price of an item: $";
    cin >> price;

    assert(price >= 10.00 || price <= 45.00);
*/

    return 0;
}



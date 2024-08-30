// Coding Excercise 4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;

int main()
{
   
	// -----------------------------------------------------------------------------------------------------------------------------

// Continuation from 08/26 

/*/Define the variables
const double TAX_RATE = 0.03;
double priceChips, subTotal, tax, totalCost;
int quantChips;

// Prompt and get info from the User
cout << "Price of a bag of chips: $";
cin >> priceChips;
cout << "Quantity of chips purchased: ";
cin >> quantChips;

//Claculations
subTotal = priceChips * quantChips;
tax = subTotal * TAX_RATE;
totalCost = subTotal + tax;

// Display results (With setprecision, remember the # in the parenthesis will be the total amount of characters counted for the spaces.
// So, since the longest string of characters is 31, the rest will account for any characters that do not equal to 31. Like so:

//The price of chips before tax: $  7.50
//Tax amount applied:            $  0.22
//Total cost for a bag of chips: $  7.72

//See how it all  comes together to make the '$' and numbers after even?

cout << fixed << setprecision(2) << endl;
cout << setw(31) << left << "The price of chips before tax: " << "$" << setw(6) << right << subTotal << endl;
cout << setw(31) << left << "Tax amount applied: " << "$" << setw(6) << right << tax << endl;
cout << setw(31) << left << "Total cost for a bag of chips: " << "$" << setw(6) << right << totalCost << endl;

return 0;
*/

//----------------------------------------------------------------------------------------------------------------------------

int Seconds, Minutes, Hours, totalSeconds;

cout << "How many seconds passed? ";
cin >> totalSeconds;

Hours = totalSeconds / 3600;
totalSeconds %= 3600;

Minutes = totalSeconds / 60;
totalSeconds %= 60;

Seconds = totalSeconds;

cout << "----------------------------------------------------" << endl;
cout << Hours << " hours " << Minutes << " minutes and " << Seconds << " seconds." << endl;

return 0;


// --------------------------------------------------------------------------------------------------------------------

/*// !!!Use this last excercise as practice for precision!!!
	string s1 = "Potatoes", s2 = "Lucky Charms", s3 = "Apples";
	string s4 = "Orange Juice";
	int id1 = 7, id2 = 13, id3 = 192, id4 = 9;
	double p1 = 12.3, p2 = 100.0, p3 = 799, p4 = 123.45;

	//Display results
	cout << fixed << setprecision(2) << endl;

    // -------------------------------------------------------------------------------------------------------------------
    
    /* ifstream inData;
    ofstream outData; 

    int a, b, c, d;

    inData.open("data.txt");
    outData.open("average.txt");

    inData >> a >> b >> c >> d;

    cout << "a" << a << endl;
    cout << "b" << b << endl; 
    cout << "c" << c << endl; 
    cout << "d" << d << endl; 

    inData.close();
    outData.close();


    return 0;
    */

   // -------------------------------------------------------------------------------------------------------------------------
    
    /* double fehr, cels;

    cout << "Enter the temperature (f): ";
    cin >> fehr; 

    cels = 5.0 / 9; // Adding this will help with debugging. This is a break point, it will stop at this line vs. executing the whole code.
    cels *= (fehr - 32); 

    cout << fehr << " f = " << cels << " c." << endl;

    return 0; */

}



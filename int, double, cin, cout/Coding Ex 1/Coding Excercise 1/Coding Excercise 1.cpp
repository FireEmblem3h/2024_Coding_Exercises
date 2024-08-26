// Coding Excercise 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/* 
This is an example of a long comment. 
Be sure to add basic information suck as what this file contains, your credentials, 
or anything the reader should know while exploring the code file.
Use comments responsibly and don't be messy with them.
*/

#include <iostream>
using namespace std;

int main()
{
	// Defined variables
	double P_Burger, P_Fries,  P_Coke; 
	int Q_Burger, Q_Fries, Q_Coke; 
	
	//Receiving the Prices for each item from the User
	cout << "Enter the price of a burger: $"; 
	cin >> P_Burger; 
	
	cout << "Enter the price of fries: $";
	cin >> P_Fries;

	cout << "Enter the price of a Coke: $";
	cin >> P_Coke;

	// Receiving the quantity of each order from the User
	cout << "How many burgers would you like to order? ";
	cin >> Q_Burger;

	cout << "How many orders of fries would you like to order? ";
	cin >> Q_Fries;

	cout << "How many cokes would you like to oder? ";
	cin >> Q_Coke;

	// Display the results
	cout << "Order Summary\n";
	cout << "---------------------\n";
	cout << "You ordered " << Q_Burger << " each at the price of " << P_Burger << endl; 
	cout << "You ordered " << Q_Fries << " each at the price of " << P_Fries << endl;
	cout << "You ordered " << Q_Coke << " each at the price of " << P_Coke << endl;


	return 0;
}



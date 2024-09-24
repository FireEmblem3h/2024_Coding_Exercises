// Functions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <cassert>
#include <string>
#include <fstream>
using namespace std;

int x = 3; //This is a global indentifier, meaning this variable can be accessed at any time, anywhere.

int main()
{
	// First thing we should do when writing outside of the main function, is to name the return type, the function, and the data type
	double g1, g2, g3, avg;
	char letter; 

	getInput(g1, g2, g3); // Performing functions within this function. This one in particular uses pass by references

	avg = calculateAverage(g1, g2, g3); 

	letter = letterGrade(avg);

	return 0; 
}

// ==============================================================================================================================

void getInput(double g1, double& g2, double& g3) {

	cout << "Enter three grades: ";
	cin >> g1 >> g2 >> g3;

}

double calculateAverage(double e1, double e2, double e3) {

	return (e1 + e2 + e3) / 3;

}

// ==============================================================================================================================


char letterGrade(double score) {

	char letter;

	if (score >= 90) letter = 'A';
	else if (score >= 80) letter = 'B';
	else if (score >= 70) letter = 'C';
	else if (score >= 60) letter = 'D';
	else return 'F'; // When you do a return statement it will execute only what is in the function block, it will not repeat.

}

// ================================================================================================================================

// Void Function

// A function that doesn't return a value, it doesn't return anything


void printMenu() {

	cout << "1. Addition\n";
	cout << "2. Subtraction\n";

}

// =================================================================================================================================

// Pass by Reference vs. Pass by Value

/* Pass by reference refers to having ONE memory bank for two values
*  Pass by value means the values are pretty much the same within different memories
*/

int main() {

	int x = 5, y = 7;

	cout << "x = " << x << ", memory: " << &x << endl;
	cout << "y = " << y << ", memory: " << &y << endl;
	
	something(x, y);

	cout << "x = " << x << ", memory: " << &x << endl; 
	cout << "y = " << y << ", memory: " << &y << endl;

	return 0;
}

void something(int a, int& b) {

	cout << "x = " << a << ", memory: " << &a << endl;  
	cout << "y = " << b << ", memory: " << &b << endl;  

	a++;
	b++;

}

// =============================================================================================================

/* 

Global Identifiers, Local Identifiers, Scopes of Identifiers

*Scope refers to the area in which the value exists, outside the function or inside.
*/

/* 
Function Overloading

* multiple functions can have the same name
* must have  
*/
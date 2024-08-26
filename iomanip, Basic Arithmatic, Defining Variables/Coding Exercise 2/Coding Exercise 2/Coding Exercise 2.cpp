// Coding Exercise 2.cpp : 
// Note: There are 3 separate exercises in this file! Be sure to comment out the others before running. 


#include <iostream>
#include <iomanip> //This is to be able to add precision into our calculation results 
using namespace std;

int main()
{
	
	/*
	Defining the different variables we will be using for the calculations.
	Note that the variables are all integers even though we are using numbers. 
	This will showcase the basic arithmatic parts of coding.
	

	//Definitions
	int a = 13, b = 5, add, sub, mul, div, mod;

	//Calculations
	add = a + b; // 13 + 5 = 18
	sub = a - b; // 13 - 5 = 8
	mul = a * b; // 13 * 5 = 65
	div = a / b; // 13 % 5 = 3

	// Display the results

	 return 0;

	*/ 

	/*
	//Defining variables
	double P_Gas, G_Gas, T_Price;

	// Extract info from User
	cout << "Enter the price per gallon: $";
	cin >> P_Gas;

	cout << "Enter the number of gallons filled: ";
	cin >> G_Gas;

	//Claculations
	T_Price = P_Gas * G_Gas;

	//Display calculated results
	cout << "The total price of gas spent is $" << T_Price << "." << endl;

	return 0;
	*/
	
 


	// Defining variables
	int G1, G2, G3, G4, G5;
	double Avg;

	//Extracting information from User
	cout << " Enter five grades: ";
	cin >> G1 >> G2 >> G3 >> G4 >> G5;

	//Claculations
	Avg = (G1 + G2 + G3 + G4 + G5) / 5.0; 

	//Display the results
	cout << fixed << setprecision(2); //This displays an exact number set to 2 numbers after decimal point
	cout << "The average is " << Avg << endl;


	return 0;

	
}


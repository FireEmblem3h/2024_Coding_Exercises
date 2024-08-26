// Coding Excercise 3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std; 

int main()
{
	
	
	/*char ch1, ch2, ch3;

	cin.get(ch1);
	cin.get(ch2);
	cin.get(ch3);

	cout << "ch1: " << ch1 << endl;
	cout << "ch2: " << ch2 << endl;
	cout << "ch3: " << ch3 << endl;

	*/

	// -------------------------------------------------------------------------------------------------------------------------

	/*string name; // In this exercise we mess with Input failures by showing you how strings read variables
	int age, weight;
	double height;

	cout << "Enter the name, age, weight, and height: ";
	cin >> name >> age >> weight >> height;

	cout << "Name: " << name << endl;
	cout << "Age: " << age << endl;
	cout << "Weight: " << weight << endl;
	cout << "Height: " << height << endl;
	*/

	// ---------------------------------------------------------------------------------------------------------------------------

	/*string first, last, full;
	int age;

	cout << "Enter the age: ";
	cin >> age; 

	cout << "Enter the *full* name: ";
	cin.ignore(); //This is ignoring the endline input after the inputed age. Telling it to ignore, then start reading the next line!

	getline(cin, full);

	cout << "You are " << age << " years old. And your name is " << full << endl;
	*/

	// --------------------------------------------------------------------------------------------------------------------------

	/* const double INTEREST_RATE = 0.03; */


	// --------------------------------------------------------------------------------------------------------------------------

	/* //This is another way to display incremental increases within expressions. One of many ways. 
	int x;

	cout << "Enter an integer: ";
	cin >> x;

	cout << ++x << endl;
	cout << x++ << endl;
	cout << x << endl; 
	*/

	int x = 7, y = 3;

	y = x++ * 2;

	cout << "x = " << x << ", y = " << y << endl;

	x += --y + 7;

	cout << "x = " << x << ", y = " << y << endl;

	return 0;
}


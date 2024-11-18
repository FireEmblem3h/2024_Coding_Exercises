// Rectangles.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Rectangle.h"

double greatestArea(Rectangle arr[], int size); 

int main()
{
	int length, width;
   const int SIZE = 5;

   Rectangle rs[SIZE];

   // Prompting the user to input legnth and width for each array until it reaches SIZE - 1
   for (int i = 0; i < SIZE; i++) {
	   cout << "Enter the length of a rectangle " << i + 1 << ": ";
	   cin >> length; 
	   cout << endl;
	   cout << "Enter the width of a rectangle " << i + 1 << ": ";
	   cin >> width; 

	   rs[i].setLength(length);
	   rs[i].setWidth(width);
	
   }


}

double greatestArea(Rectangle arr[], int size)
{
	int champ = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i].Area() > champ) {
			champ = arr[i].Area();
		}

	}

	cout << "The greatest Area is: " << greatestArea(arr, size);

}

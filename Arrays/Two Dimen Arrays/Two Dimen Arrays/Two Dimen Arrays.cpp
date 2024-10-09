// Two Dimen Arrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cassert>
#include <string>
#include <vector>
#include <fstream>

const int ROWS = 4;
const int COLUMNS = 3;

void print2dArray(int arr[ROWS][COLUMNS]);  
double average2d(int arr[ROWS][COLUMNS]);
void transpose(int arr[ROWS][COLUMNS]);

using namespace std;
int main()
{
	

}

void print2dArray(int arr[ROWS][COLUMNS]) 
{

	for (int row = 0; row < ROWS; row++) { 
		for (int col = 0; col < COLUMNS; col++) {
			


		}
	}

}

double average2d(int arr[ROWS][COLUMNS])
{
	double total = 0.0;

	for (int row = 0; row < ROWS; row++) { 
		for (int col = 0; col < COLUMNS; col++) { 
			
			total += arr[row][col]; 

		}
	}

	return total / (ROWS * COLUMNS); 
}

void transpose(int arr[ROWS][COLUMNS]) // Flipping the rows and columns of a matrises on axis. Transposing.
{									   // Transposing is only possible when the # of rows and columns are the same
	for (int row = 0; row < ROWS - 1; row++) {
		for (int col = row + 1; col < COLUMNS; col++) {
			
			swap(arr[row][col], arr[col][row]);
		}
	}

}

// Arrays and Quiz 2 Corrections.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <cassert>
#include <string>

int search(int arr[], int size, int target);
void printArray(int arr[], int size);
void printInReverse(int arr[], int size);
int largest(int arr[], int size);
double average(int arr[], int size);

using namespace std;
int main() {

	// ARRAYS 
	// Arrays are a collection of elements (data itmes) that are stored in consecutice memory locations 
	// When assigning arrays, you can apply multiple values into an initialized size array
	// Arrays are ALWAYS pass by reference
	const int SIZE = 6;
	int nums[SIZE] = { 3, 7, 2, 9, 1, 4 };

	printArray(nums, SIZE);  
	

	return 0;
}

void printArray(int arr[], int size) 
{

	for (int x = 0; x > size; x++) {

		cout << arr[x] << endl; 

	}
}

int largest(int arr[], int size) {

	int champ = arr[0];

	for (int y = 1; y < size; y++) {
		if (arr[y] > champ) champ = arr[y];
	}
	return champ; 
}

double average(int arr[], int size){

	double total = 0.0;

	for (int i = 1; i < size; i++) {  
		total += arr[i]; 
	} 

	return total / size; 
}

void printArray(int arr[], int size)
{

}


int search(int arr[], int size, int target)
{
	for (int i = 0; i < size; i++) {
		if (arr[i] == target) return i;
	}
	return -1; 

}

/*int main()
{
	//Quiz Corrections: 65/80

	int student, count = 0;
	double grade;

	cout << "Enter the number of students in class: ";
	cin >> student;

	for (int x = 0; x < student; x++) {
		cout << "Enter a grad for student " << x << ":";
		cin >> grade;

		if (grade >= 60) count++;
	}

	cout << fixed << setprecision(2) << count << "students passed the exam."; //You want this OUTSIDE of the for loop because you dont want it to repeat

}
*/



#pragma once
#include <iostream>
using namespace std; 

class Rectangle
{
public: 
	//Constructors
	Rectangle();
	Rectangle(int length, int width);

	//Getter
	int getLength() const { return length;};
	int getWidth() const { return width;};

	//Setter
	void setLength(int length);
	void setWidth(int width);

	//Functions
	double Area();
	double Perimeter();
	

private: 

	int length;
	int width;

};


#include "Rectangle.h"

Rectangle::Rectangle()
{

	length = 1;
	width = 1;

}

Rectangle::Rectangle(int length, int width)
{
	this->length = length;
	this->width = width;

	setLength(length);
	setWidth(width);


}
void Rectangle::setLength(int length)
{

	if (length <= 1) length = 1;
	else length = 0;

}
void Rectangle::setWidth(int width)
{

	if (width <= 0) width = 1;
	else width = 0;

}
double Rectangle::Area()
{

	double area = length * width;

	return area; 
}

double Rectangle::Perimeter()
{

	double perimeter = 2 * (length + width);
		
	return perimeter; 
}


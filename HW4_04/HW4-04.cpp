//////////////////////////////////////
//UML Diagram
//class Rectangle2D
//variables:
//
//	double x, y, width, height, area, perimeter;
//
//
//behaviors:
//
//	double getX() const;
//	void setX(int x);
//	double getY() const;
//	void setY(int y);
//	double getWidth() const;
//	void setWidth(int width);
//	double getHeight() const;
//	void setHeight(int height);
//	double getArea() const;
//	double getPerimeter() const;
//	bool contains(double x, double y) const;
//	bool contains(const Rectangle2D &r) const;
//	bool overlaps(const Rectangle2D &r) const;


#include <iostream>
#include "Rectangle2D.h"
using namespace std;




double rectangle::getX() const
{
	return x;
}
void rectangle::setX(int x)
{
	new_x = x;
}
double rectangle::getY() const
{
	return y;
}
void rectangle::setY(int y)
{
	new_y = y;
}
double rectangle::getWidth() const
{
	return width;
}
void rectangle::setWidth(int width)
{
	new_width = width;
}
double rectangle::getHeight() const
{
	return height;
}
void rectangle::setHeight(int height)
{
	new_height = height;
}
double rectangle::getArea() const
{
	return area;
}
double rectangle::getPerimeter() const
{
	return perimeter;
}
bool rectangle::contains(double x, double y) const
{
	if (x < (width / 2) && x>(width / 2) && y < (height / 2) && y>(height / 2))
		return true;
	else
		return false;
}
bool rectangle::contains(const Rectangle2D &r) const
{
	if ()
		return true;
	else
		return false;
}
bool rectangle::overlaps(const Rectangle2D &r) const
{
	if ()
		return true;
	else
		return false;
}

int main() {
	Rectangle2D rectangle(0,0,1,1);
}










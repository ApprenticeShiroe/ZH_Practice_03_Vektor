#include "vector.h"
#include <stdio.h>

vector::vector()
{
	x = 0.0;
	y = 0.0;
}

vector::vector(double px)
{
	x = px;
	y = 0.0;
}

double vector::getX() const
{
	return x;
}

double vector::getY() const
{
	return y;
}

void vector::setX(double px)
{
	x = px;
}

void vector::setY(double py)
{
	y = py;
}

void vector::add(vector& v1, vector& v2)
{
	setX(v1.getX() + v2.getX());
	setY(v1.getY() + v2.getY());
}

void vector::sub(vector& v1, vector& v2)
{
	setX(v1.getX() - v2.getX());
	setY(v1.getY() - v2.getY());
}

void vector::mult(vector& v1, vector& v2)
{
	setX(v1.getX() * v2.getX());
	setY(v1.getY() * v2.getY());
}

void vector::print() const
{
	printf("A Vektor X koordinataja: %lf\nA Vektor Y koordinataja: %lf\n*****\n", x, y);
}


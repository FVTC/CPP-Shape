
// main.cpp - DO NOT EDIT THIS FILE!

#include <iostream>
#include <conio.h>

#include "Circle.h"
#include "Triangle.h"

using namespace std;

int main()
{
	float sideA, sideB, sideC;
	cout << "Please enter the side lengths of the triangle: " << endl;
	cout << "Side A: ";
	cin >> sideA;
	cout << "Side B: ";
	cin >> sideB;
	cout << "Side C: ";
	cin >> sideC;

	Shape *triangle = new Triangle(sideA, sideB, sideC);
	triangle->Display();

	cout << endl << endl;

	float radius = 0;
	cout << "Please enter the radius of the circle: ";
	cin >> radius;

	Shape *circle = new Circle(radius);
	circle->Display();

	(void)_getch();
	return 0;
}
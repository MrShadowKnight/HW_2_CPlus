#include <iostream>
#include <math.h>
#include "Rectangle.h"
#include "RightAngledTriangle.h"

using namespace std;

int main()
{
	// TASK 1

	double width, height;

	cout << "Please enter width: ";
	cin >> width;
	cout << "Please enter height: ";
	cin >> height;

    Rectangle myRectangle(width, height);

    cout << "Rectangle area: " << myRectangle.calculateArea() << endl;
    cout << "Perimeter of a rectangle: " << myRectangle.calculatePerimeter() << endl;

    cout << "Rectangle:" << endl;
    myRectangle.drawRectangle();

    return 0;

	// TASK 2

	double catheteOne, catheteTwo;

	cout << "Please input first cathete:";
	cin >> catheteOne;
	cout << "Please input second cathete:";
	cin >> catheteTwo;

	RightAngledTriangle triangle;

	triangle.setCatheteOne(catheteOne);
	triangle.setCatheteTwo(catheteTwo);

	double hypotenuse = triangle.calculateHypotenuse();
	double area = triangle.calculateArea(); 

	cout << endl << "Cathete one: " << catheteOne << endl;
	cout << "Cathete two: " << catheteTwo << endl;
	cout << "Hypotenuse: " << hypotenuse << endl;
	cout << "Area: " << area << endl;
}

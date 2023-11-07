#pragma once
#include <iostream>
#include <math.h>

using namespace std;

class RightAngledTriangle
{
private:

	double catheteOne;
	double catheteTwo;

public:

	void getCatheteOne() {
		this->catheteOne;
	}

	void getCatheteTwo() {
		this->catheteTwo;
	}

	void setCatheteOne(double catheteOne) {
		this->catheteOne = catheteOne;
	}

	void setCatheteTwo(double catheteTwo) {
		this->catheteTwo = catheteTwo;
	}

	double calculateHypotenuse() {
		return sqrt(pow(catheteOne, 2) + pow(catheteTwo, 2));
	}

	double calculateArea() {
		return (catheteOne * catheteTwo) / 2;
	}
};

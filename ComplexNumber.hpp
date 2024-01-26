#include <iostream>
using namespace std;

class ComplexNumber 
{
private:
	float realNumber;
	float imagineNumber;		//Imaginary Number

public:
	ComplexNumber(float, float);

	ComplexNumber add(ComplexNumber, ComplexNumber);	//Addition
	ComplexNumber sub(ComplexNumber, ComplexNumber);	//Subtract
	ComplexNumber mult(ComplexNumber, ComplexNumber);	//Multiply
	ComplexNumber div(ComplexNumber, ComplexNumber);	//Division
	
	ComplexNumber negate(ComplexNumber);				//Negation
	ComplexNumber mag(ComplexNumber);					//Magnitude
	ComplexNumber con(ComplexNumber);					//Conjugation
	ComplexNumber real(ComplexNumber);					//Real Part
	ComplexNumber imagine(ComplexNumber);				//Imaginary Part
};
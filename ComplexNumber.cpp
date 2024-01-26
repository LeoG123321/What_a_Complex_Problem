#include <iostream>
#include "ComplexNumber.hpp"

using namespace std;

ComplexNumber::ComplexNumber(float realNum, float imagineNum) {
	this->realNum = realNum;
	this->imagineNum = imagineNum;
}

float ComplexNumber::getRealNum(ComplexNumber) {
	return realNum;
}
float ComplexNumber::getImagineNum(ComplexNumber) {
	return imagineNum;
}

ComplexNumber add(ComplexNumber pri, ComplexNumber sec) {	//pri == Primary		sec == Secondary
	
}

ComplexNumber ComplexNumber::sub(ComplexNumber, ComplexNumber) {

}
ComplexNumber ComplexNumber::mult(ComplexNumber, ComplexNumber) {

}
ComplexNumber ComplexNumber::div(ComplexNumber, ComplexNumber) {

}

ComplexNumber ComplexNumber::negate(ComplexNumber) {

}
ComplexNumber ComplexNumber::mag(ComplexNumber) {

}
ComplexNumber ComplexNumber::con(ComplexNumber) {

}
ComplexNumber ComplexNumber::real(ComplexNumber) {

}
ComplexNumber ComplexNumber::imagine(ComplexNumber) {

}
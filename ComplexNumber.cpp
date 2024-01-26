#include "ComplexNumber.hpp"

ComplexNumber::ComplexNumber(float realNum, float imagineNum) {
	this->realNum = realNum;
	this->imagineNum = imagineNum;
}

ComplexNumber::ComplexNumber() {
	realNum = 0;
	imagineNum = 0;
}


float ComplexNumber::getRealNum() {
	return realNum;
}
float ComplexNumber::getImagineNum() {
	return imagineNum;
}

ComplexNumber ComplexNumber::add(ComplexNumber sec) {	//pri == Primary		sec == Secondary
	return ComplexNumber(realNum + sec.getRealNum(), imagineNum + sec.getImagineNum());
}

ComplexNumber ComplexNumber::sub(ComplexNumber sec) {
	return ComplexNumber(realNum - sec.getRealNum(), imagineNum - sec.getImagineNum());
}

/*
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
*/
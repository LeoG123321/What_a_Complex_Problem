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

ComplexNumber add(ComplexNumber pri, ComplexNumber sec) {	//pri == Primary		sec == Secondary
	return ComplexNumber(pri.getRealNum() + sec.getRealNum(), pri.getImagineNum() + sec.getRealNum());
}

ComplexNumber ComplexNumber::sub(ComplexNumber pri, ComplexNumber sec) {
	return ComplexNumber(pri.getRealNum() - sec.getRealNum(), pri.getImagineNum() - sec.getRealNum());
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
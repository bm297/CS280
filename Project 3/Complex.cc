#include "complex.h"

Complex::Complex(double rr, double ii) : r(rr), i(ii) {
}

Complex operator+ (const Complex &a, const Complex &b) {
	Complex result;

	result.r = a.r + b.r;
	result.i = a.i + b.i;

	return result;
}

Complex operator- (const Complex &a, const Complex &b) {
	Complex result;

	result.r = a.r - b.r;
	result.i = a.i - b.i;

	return result;
}

Complex operator* (const Complex &a, const Complex &b) {
	Complex result;

	result.r = (a.r * b.r - a.i * b.i);
	result.i = (a.r * b.i + a.i * b.r);

	return result;
}

Complex operator/ (const Complex &a, const Complex &b) {
	Complex result;

	result.r = (a.r * b.r + a.i * b.i) / (b.r * b.r + b.i * b.i);
	result.i = (a.i * b.r - a.r * b.i) / (b.r * b.r + b.i * b.i);

	return result;
}


ostream& operator<< (ostream &out, const Complex &c) {

	out << c.r << "+" << c.i << "i";
	return out;
}


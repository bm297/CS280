// Author:  Keith A. Shomper
// Date:    2/2/06
// Purpose: To demonstrate a well-defined C++ class

#ifndef COMPLEX_NUMBER
#define COMPLEX_NUMBER

#include <iostream>
using namespace std;

class Complex {
 public:
   Complex(double real = 0.0, double imag = 0.0);

   friend Complex operator+ (const Complex &a, const Complex &b);
   friend Complex operator- (const Complex &a, const Complex &b);
   friend Complex operator* (const Complex &a, const Complex &b);
   friend Complex operator/ (const Complex &a, const Complex &b);

   friend ostream&      operator<<(ostream &out,           const Complex &c);

 private:
	double r;
	double i;
};

#endif  // COMPLEX_NUMBER


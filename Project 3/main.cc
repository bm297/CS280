#include <iostream>
#include "Complex.h"

using namespace std;

int main () {
	Complex x(5, 6), y, z;
	Complex sum, difference, product, quotient;

	y = Complex(-3, 4);

	z = Complex(3, 0);
	
	int i = 5;

	
	cout << "a is:  " << x << endl;
	cout << "b is:  " << y << endl;

	sum        = x + y;
	difference = x - y;
	product    = x * y;
	quotient   = sum / z;
	
	cout << x << " + " <<  y << " = " << x+y << endl;
	cout << x << " - " <<  y << " = " << x-y << endl;
	cout << x << " * " <<  y << " = " << x*y << endl;
	cout << x << " / " <<  y << " = " << x/y << endl;
	
	cout << x << " + " <<  i << " = " << x+i << endl;
	cout << x << " - " <<  i << " = " << x-i << endl;
	cout << x << " * " <<  i << " = " << x*i << endl;
	cout << x << " / " <<  i << " = " << x/i << endl;
	
	cout << i << " + " <<  x << " = " << i+x << endl;
	cout << i << " - " <<  x << " = " << i-x << endl;
	cout << i << " * " <<  x << " = " << i*x << endl;
	cout << i << " / " <<  x << " = " << i/x << endl;

	return 0;
}


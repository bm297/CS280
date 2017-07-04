#
#   Complex.py
#   Python Version 3.5.2
#   Author: Beshoy Megalaa
#   Class: CS280
#

class Complex:
    def __init__(self, real=0, imag=0):
        self.real = real
        self.imag = imag

    def __add__(self, other):
        if isinstance(other, int):
            return Complex(self.real + other, self.imag)
        elif isinstance(other, Complex):
            return Complex(self.real + other.real, self.imag + other.imag)
        else:
            raise TypeError
    
    def __sub__(self, other):
        if isinstance(other, int):
            return Complex(self.real - other, self.imag)
        elif isinstance(other, Complex):
            return Complex(self.real - other.real, self.imag - other.imag)
        else:
            raise TypeError

    def __mul__(self, other):
        if isinstance(other, int):
            return Complex(self.real * other, self.imag)
        elif isinstance(other, Complex):
            return Complex(self.real * other.real, self.imag * other.imag)
        else:
            raise TypeError

    def __truediv__(self, other):
        if isinstance(other, int):
            return Complex(self.real / other, self.imag)
        elif isinstance(other, Complex):
            return Complex(self.real / other.real, self.imag / other.imag)
        else:
            raise TypeError

    def __radd__(self, other):
        return self + other

    def __rsub__(self, other):
        return self - other

    def __rmul__(self, other):
        return self * other

    def __rtruediv__(self, other):
        return self / other

    
    def __str__(self):
        return '(%g + %gi)' % (self.real, self.imag)

if __name__ == '__main__':

    a = Complex(5, 6)
    b = Complex(-3, 4)
    
    i = 5
    
    print('%s + %s = %s' % (a, b, a + b))
    print('%s - %s = %s' % (a, b, a - b))
    print('%s * %s = %s' % (a, b, a * b))
    print('%s / %s = %s' % (a, b, a / b))

    print('%s + %i = %s' % (a, i, a + i))
    print('%s - %i = %s' % (a, i, a - i))
    print('%s * %i = %s' % (a, i, a * i))
    print('%s / %i = %s' % (a, i, a / i))

    print('%i + %s = %s' % (i, a, i + a))
    print('%i - %s = %s' % (i, a, i - a))
    print('%i * %s = %s' % (i, a, i * a))
    print('%i / %s = %s' % (i, a, i / a))

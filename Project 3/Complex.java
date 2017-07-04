
public class Complex {
    private double r;   // Real Number
    private double i;   // Imaginary Number
 
    // create a new object with the given real and imaginary parts
    public Complex(double real, double imag) {
        r = real;
        i = imag;
    }
 
    // return a string representation of the invoking Complex object
    public String toString() {
        if (i == 0) return r + "";
        if (r == 0) return i + "i";
        if (i <  0) return r + " - " + (-i) + "i";
        return r + " + " + i + "i";
    }
 
    // return abs/modulus/magnitude and angle/phase/argument
    public double abs()   { return Math.hypot(r, i); }  // Math.sqrt(re*re + im*im)
    public double phase() { return Math.atan2(i, r); }  // between -pi and pi
 
    // return a new Complex object whose value is (this + b)
    public Complex plus(Complex b) {
        Complex a = this;             // invoking object
        double real = a.r + b.r;
        double imag = a.i + b.i;
        return new Complex(real, imag);
    }
    
    // Add number
    public Complex plus(int i){
    	return new Complex(re() + i, im());
    }
    
    // Sub number
    public Complex minus(int i){
    	return new Complex(re() - i, im());
    }
    
    // Add number
    public Complex times(int i){
    	return new Complex(re() * i, im());
    }
    
    // Add number
    public Complex divides(int i){
    	return new Complex(Math.round(re() / i), im());
    }
 
    // return a new Complex object whose value is (this - b)
    public Complex minus(Complex b) {
        Complex a = this;
        double real = a.r - b.r;
        double imag = a.i - b.i;
        return new Complex(real, imag);
    }
 
    // return a new Complex object whose value is (this * b)
    public Complex times(Complex b) {
        Complex a = this;
        double real = a.r * b.r - a.i * b.i;
        double imag = a.r * b.i + a.i * b.r;
        return new Complex(real, imag);
    }
 
    // scalar multiplication
    // return a new object whose value is (this * alpha)
    public Complex times(double alpha) {
        return new Complex(alpha * r, alpha * i);
    }
 
    // return a new Complex object whose value is the conjugate of this
    public Complex conjugate() {  return new Complex(r, -i); }
 
    // return a new Complex object whose value is the reciprocal of this
    public Complex reciprocal() {
        double scale = r*r + i*i;
        return new Complex(r / scale, -i / scale);
    }
 
    // return the real or imaginary part
    public double re() { return r; }
    public double im() { return i; }
 
    // return a / b
    public Complex divides(Complex b) {
        Complex a = this;
        return a.times(b.reciprocal());
    }  
 
    // a static version of plus
    public static Complex plus(Complex a, Complex b) {
        double real = a.r + b.r;
        double imag = a.i + b.i;
        Complex sum = new Complex(real, imag);
        return sum;
    }
}

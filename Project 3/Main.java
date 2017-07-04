/* Main.java */

public class Main {

	public static void main(String[] args) {
		Complex a = new Complex(5.0, 6.0);
		Complex b = new Complex(-3.0, 4.0);
		int i =5;
		
        System.out.println("(" + a + ")" + " + " + "(" + b + ")" + " = " + "(" + a.plus(b) + ")");
        System.out.println("(" + a + ")" + " - " + "(" + b + ")" + " = " + "(" + a.minus(b) + ")");
        System.out.println("(" + a + ")" + " * " + "(" + b + ")" + " = "  + "(" + a.times(b) + ")");
        System.out.println("(" + a + ")" +  " / " + "(" + b + ")" + " = "  + "(" + a.divides(b) + ")");

        System.out.println("(" + a + ")" + " + " + i + " = "  + "(" + a.plus(i) + ")");
        System.out.println("(" + a + ")" + " - " + i + " = "  + "(" + a.minus(i) + ")");
        System.out.println("(" + a + ")" + " * " + i + " = "  + "(" + a.times(i) + ")");
        System.out.println("(" + a + ")" + " / " + i + " = "  + "(" + a.divides(i) + ")");

	}
}
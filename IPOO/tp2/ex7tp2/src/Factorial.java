import java.math.BigInteger;

public class Factorial {
    public static void main(String[] args) {
        System.out.println(factorial(BigInteger.valueOf(200)));
    }
    static BigInteger factorial(BigInteger n) {
        if (n.equals( BigInteger.ZERO)||n.equals( BigInteger.ONE))
            return BigInteger.ONE;
        else
            return n.multiply(factorial(n.subtract(BigInteger.ONE)));
    }


}

// find the sum of digits recursively

public class sumOfDigits {
    public static int sumD(int n) {
        if (n==0) {
            return 0;
        }
        return n%10 + sumD(n/10);
    }
    public static void main (String [] args) {
        System.out.println(sumD(1234));
    }
}

//find the sum of the first n natural numbers recursively

public class sumOfN {
    public static int sum(int n) {
        if (n==0) {
            return 0;
        }
        return n + sum(n-1);
    }
    public static void main (String[] args) {
        System.out.println(sum(10));
    }   
}
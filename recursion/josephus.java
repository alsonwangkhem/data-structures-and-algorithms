// josephus problem - there are 'n' people in a circle, kill every kth person until there is a single 
// survivor and return the position of the survivor

public class josephus {
    public static int jos(int n, int k) {
        if (n==1) {
            return 0;
        }
        return (jos(n-1 , k) + k)%n;
    }
    public static void main (String [] args) {
        System.out.println(jos(7, 3));
    }
}

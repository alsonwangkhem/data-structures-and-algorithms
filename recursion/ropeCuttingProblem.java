// rope cutting problem
// given a rope of length n, find the maximum number of pieces you can make such that the length of every piece
// is in set {a, b, c} for the given three values a, b, c

public class ropeCuttingProblem {
    public static int cutRope(int n, int a, int b, int c) {
        if (n==0) return 0;
        if (n<0) return -1;
        int result = Math.max(Math.max(cutRope(n-a, a, b, c), cutRope(n-b, a, b, c)), cutRope(n-c, a, b, c));
        if (result == -1) return -1;
        return result+1;
    }
    public static void main (String [] args) {
        int pieces = cutRope(5, 4, 2, 6);
        System.out.println("Number of pieces is " + pieces);
    }
}

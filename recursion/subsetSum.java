// Given an array of non-negative integers, and a value sum, determine if there is a subset of the given set 
// with sum equal to given sum and return the number of subsets

public class subsetSum {
    // first implementation
    public static int subsetNumber(int arr[], int n, int sum) {
        if (n==0) {
            return (sum==0)? 1:0;
        }
        return subsetNumber(arr, n-1, sum) + subsetNumber(arr, n-1, sum-arr[n-1]);
    }
    // second implementation
    public static int subsetNumber1(int arr[], int sum, int i) {
        if (i == arr.length) {
            return (sum==0)? 1:0;
        }
        return subsetNumber1(arr, sum, i+1) + subsetNumber1(arr, sum-arr[i], i+1);
    }
    public static void main (String[] args) {
        int arr[] = {10, 5, 2, 3, 6};
        int n = arr.length;
        int sum = 8;
        System.out.println(subsetNumber(arr, n, sum));
        System.out.println(subsetNumber1(arr, sum, 0));
    }
}

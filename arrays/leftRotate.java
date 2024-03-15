package arrays;

public class leftRotate {
    // left rotate by 1 place
    public static void by1(int arr[]) {
        int temp = arr[0];
        for (int i = 1; i<arr.length; i++) {
            arr[i-1] = arr[i];
        }
        arr[arr.length-1] = temp;
    }
    // left rotate by d places - time theta(nd) and space theta(1)
    public static void byd1(int arr[], int d) {
        for (int i = 0; i<d; i++) {
            by1(arr);
        }
    }
    // left rotate by d places - time theta(n) and space theta(d)
    public static void byd2(int arr[], int d) {
        int [] temp = new int[d];
        int n = arr.length;
        for (int i = 0; i<d; i++) {
            temp[i] = arr[i]; // temp[] = {1, 2}
        }
        for (int i = d; i<n; i++) {
            arr[i-d] = arr[i]; // arr[] = {3, 4, 5, 4, 5}
        }
        for (int i = 0; i<d; i++) { // traverses through temp[]
            arr[n-d+i] = temp[i]; // arr[] = {3, 4, 5, 1, 2}
        }
    }
    public static void reverse(int [] arr, int i, int j) {
        while (i<j) {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++; j--;
        }
    }
    // reversal method - theta(n) time and theta(1) space
    public static void byd3(int arr[], int d) {
        int n = arr.length;
        reverse(arr, 0, d-1);
        reverse(arr, d, n-1);
        reverse(arr, 0, n-1);
    }
    public static void main(String [] args) {
        int [] arr = {1, 2, 3, 4, 5};
        byd3(arr, 2);
        for (int i = 0; i<arr.length; i++) {
            System.out.print(arr[i] + "  ");
        }
        System.out.println();
    }
}
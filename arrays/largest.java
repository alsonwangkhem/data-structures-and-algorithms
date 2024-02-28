package arrays;

public class largest {
    //naive
    public static int getLargest1(int arr[]) {
        for (int i = 0; i<arr.length; i++ ) {
            boolean flag = true;
            for (int j = 0; j<arr.length; j++) {
                if (arr[j]>arr[i]) {
                    flag = false;
                }
            }
            if (flag == true) {
                return i;
            }
        }
        return -1;
    }
    //efficient
    public static int getLargest2(int arr[]) {
        int largest = arr[0];
        for (int i = 0; i<arr.length; i++) {
            if (arr[i]>largest) {
                largest = arr[i];
            }
        }
        return largest;
    }
    public static void main (String [] args) {
        int arr[] = {1, 4, 7, 23, 4, 89, 100, 99};
        System.out.println("The largest element in the array is " + arr[getLargest1(arr)]);
        System.out.println("The largest element in the array is " + getLargest2(arr));
    }
}
package arrays;

public class insert {
    public static int insertFn(int arr[], int x, int capacity,int n, int position) {
        if (capacity == n) {
            return n; 
        }
        int index = position - 1;
        for (int i = n - 1; i > index; i--) {
            arr[i+1] = arr[i];
        }
        arr[index] = x;
        return n + 1;
    }
    public static void main(String[] args) {
        int capacity = 10; // capacity of the array
        int x = 12; // element to be inserted
        int position = 2; // position at which the element is to be inserted
        int[] arr = new int[capacity];
        arr[0] = 0;
        arr[1] = 1;
        arr[2] = 2;
        arr[3] = 3;
        arr[4] = 4;
        arr[5] = 5;
        int n = 6;

        System.out.println("Original array:");
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + "  ");
        }

        System.out.println();
        insertFn(arr, x, capacity, n, position);
        System.out.println("Array after insertion:");
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + "  ");
        }
    }
}

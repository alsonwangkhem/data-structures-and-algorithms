package arrays;
// given an array, move all zeroes to the end of it keeping the order of non zero elements the same

public class zeroEnds {
    public static void swap(int [] arr, int i, int j) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    //naive - O(n^2) time
    public static void moveZeroesToEnd(int arr[]) {
        for (int i=0; i<arr.length; i++) {
            if (arr[i] == 0) {
                for (int j = i; j<arr.length; j++) {
                    if (arr[j] != 0) {
                        swap(arr, i, j);
                        break;
                    }
                }
            }
        }
    }
    // efficient - O(n) time
    public static void moveZeroesToEnd1(int arr[]) {
        int count = 0; //keep track of the number of non-zero elements so increment it every time we find a nonzero element
        // count also gives the index of 0 that is needed to be swapped
        for (int i = 0; i<arr.length; i++) {
            if (arr[i] != 0) {
                swap(arr, i, count);
                count++;
            }
        }
    }
    public static void main (String args[]) {
        int arr[] = {1, 2, 0, 4, 0, 45, 23, 0, 0, 5, 4, 7, 0};
        moveZeroesToEnd1(arr);
        for (int i = 0; i<arr.length; i++) {
            System.out.print(arr[i] + "  ");
        }
        System.out.println();
    }
    
}

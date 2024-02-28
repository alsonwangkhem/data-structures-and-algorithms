package arrays;

public class delete {
    public static void deleteFn(int arr[], int x) {
        int index;
        for (index = 0; index<arr.length; index++) {
            if (arr[index] == x) {
                break;
            }
        }
        for (int j = index; j<arr.length-1; j++) {
            arr[j] = arr[j+1];
        }
        arr[arr.length-1] = 0;
    }
    public static void main (String [] args) {
        int arr[] = {1, 2, 3, 4, 5, 6};
        int x = 3;
        for (int i = 0; i<arr.length; i++) {
            System.out.print(arr[i] + "  ");
        }
        deleteFn(arr, x);
        System.out.println();
        for (int i = 0; i<arr.length; i++) {
            System.out.print(arr[i] + "  ");
        }
    }
}

package arrays;
// remove duplicates from a SORTED array

public class removeDuplicates {
    // naive - O(n) time and O(n) space complexity
    public static void remove(int arr[]) {
        int []temp = new int[arr.length];
        temp[0] = arr[0];
        int res = 1;
        for (int i = 0; i<arr.length; i++) {
            if (temp[res-1] != arr[i]) {
                temp[res] = arr[i];
                res++;
            }
        }
        for (int i = 0; i<arr.length; i++) {
            arr[i] = temp[i];
        }
    }
    //efficient - O(n) time and O(1) space complexity
    public static void removeNew(int arr[]) {
        // a variable to keep track of different elements
        // a loop through the whole array
        int res = 0;
        for (int i = 1; i<arr.length; i++) {
            if (arr[i] != arr[res]) {
                arr[++res] = arr[i];
            }
        }
        for (res = res+1; res<arr.length; res++) {
            arr[res] = 0;
        }
    }
    public static void main (String [] args) {
        int arr[] = {1, 1, 2, 2, 3, 3, 4, 4, 5, 5};
        removeNew(arr);
        for (int i = 0; i<arr.length; i++) {
            System.out.print(arr[i] + "  ");
        }
    }
}

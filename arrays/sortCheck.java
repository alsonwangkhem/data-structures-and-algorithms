package arrays;

public class sortCheck {
    // naive
    public static boolean checkSorted(int arr[]) {
        for (int i = 0; i<arr.length; i++) {
            for (int j = i+1; j<arr.length; j++) {
                if (arr[j]<arr[i]) {
                    return false;
                }
            }
        }
        return true;
    }
    // efficient
    public static boolean checkSorted1(int arr[]) {
        // int element = arr[0];
        // for (int i = 1; i<arr.length; i++) {
        //     if (element<=arr[i]) {
        //         element = arr[i];
        //     } else {
        //         return false;
        //     }
        // }
        // return true;
        for (int i = 1; i<arr.length; i++) {
            if (arr[i-1]>arr[i]) {
                return false;
            }
        }
        return true;
    }
    public static void main (String[] args) {
        int arr[] = {1, 2, 3, 4, 5};
        System.out.println("The array is " + (checkSorted(arr)? "sorted" : "not sorted"));
        System.out.println("The array is " + (checkSorted1(arr)? "sorted" : "not sorted"));
    }
}

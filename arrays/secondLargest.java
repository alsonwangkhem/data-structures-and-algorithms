package arrays;

public class secondLargest {
    public static int getLargest(int arr[]) {
        int largest = arr[0];
        for (int i = 0; i<arr.length; i++) {
            if (arr[i]>largest) {
                largest = arr[i];
            }
        }
        return largest;
    }
    //naive
    public static int findSecondLargest1(int arr[]) {
        int largest = getLargest(arr);
        int result = -1;
        for (int i = 0; i<arr.length; i++) {
            if (arr[i] != largest) {
                if (result == -1) {
                    result = i;
                } else if (arr[i] > arr[result]) {
                    result = i;
                }
            }
        }
        return result;
    }
    // efficient
    public static int findSecondLargest2(int arr[]) {
        int result = -1;
        int largest = 0;
        for (int i = 0; i<arr.length; i++) {
            if (arr[i]>arr[largest]) {
                largest = arr[i];
                result = largest;
            } else if (arr[i] < arr[largest]) {
                if (result == -1) {
                    result = i;
                } else {
                    result = (arr[result]>arr[i])? result : i;
                }
            }
        }
        return result;
    }
    public static void main (String [] args) {
        int arr[] = {12, 5, 2, 6, 1, 7, 3};
        System.out.println("The second largest element of the array is " + arr[findSecondLargest1(arr)]);
        System.out.println("The second largest element of the array is " + arr[findSecondLargest2(arr)]);
    }
}

package arrays;

public class leaders {
    // naive - O(n^2) time
    public static void findLeaders(int[] arr) {
        int n = arr.length;
        for (int i = 0; i < n; i++) {
            boolean isLeader = true;
            for (int j = i + 1; j < n; j++) {
                if (arr[j] >= arr[i]) {
                    isLeader = false;
                    break;
                }
            }
            if (isLeader) {
                System.out.print(arr[i] + "  ");
            }
        }
        System.out.println();
    }
    // efficient - O(n) time
    public static void findLeaders1(int []arr) {
        int n = arr.length;
        int curr_leader =n-1;
        System.out.print(arr[curr_leader] + "  ");
        for (int i = n-2; i>=0; i--) {
            if (arr[i]>arr[curr_leader]) {
                curr_leader = i;
                System.out.print(arr[curr_leader] + "  ");
            }
        }
        System.out.println();
    }
    public static void main(String[] args) {
        int [] arr = {7, 10, 4, 3, 6, 5, 2};
        findLeaders1(arr);
    }
}

// given a string, find all possible permutations of that string

public class stringPermutations {
    // In Java, when you pass primitive data types like char to a method, the method receives a copy of the value, not a reference to the original variable. Therefore, swapping the values inside the swap method does not affect the original string.
    // public static void swap(char a, char b) {
    //     char temp = a;
    //     a = b;
    //     b = temp;
    // }
    public static String swap(String s, int i, int j) {
        char[] charArray = s.toCharArray();
        char temp = charArray[i];
        charArray[i] = charArray[j];
        charArray[j] = temp;
        return new String(charArray);
    }
    public static void permute(String s, int i) {
        if (i==s.length() -1) {
            System.out.print(s + "  ");
            return;
        }
        for (int j = i; j<s.length(); j++) {
            s = swap(s, i, j);
            permute(s, i+1);
            s = swap(s, i, j);
        }
    }
    public static void main (String [] args) {
        permute("ABC", 0);
    }
}
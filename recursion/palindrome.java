// check if a given string is palindrom or not recursively
// it still doesn't handle corner cases for punctuations and case sensitivity
public class palindrome {
    public static boolean checkPalindrome(String s, int start, int end) {
        if (start>=end) {
            return true;
        }
        return s.charAt(start) == s.charAt(end) && checkPalindrome(s, start+1, end-1);
    }
    public static void main (String [] args) {
        String s = "racecar";
        int start = 0;
        int end = s.length()-1;
        if(checkPalindrome(s, start, end)) {
            System.out.println("the string is palindrome");
        } else {
            System.out.println("the string is not palindrome");
        }
    }
}
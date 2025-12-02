// Implement the myAtoi(string s) function, which converts a string to a 32-bit signed integer. 
// The algorithm for myAtoi(string s) is as follows: 
// Whitespace: Ignore any leading whitespace (" "). 
// Signedness: Determine the sign by checking if the next character is '-' or '+', assuming positivity is neither 
// present. 
// Conversion: Read the integer by skipping leading zeros until a non-digit character is encountered or the 
// end of the string is reached. If no digits were read, then the result is 0. 
// Rounding: If the integer is out of the 32-bit signed integer range [-231, 231 - 1], then round the integer to 
// remain in the range. Specifically, integers less than -231 should be rounded to -231, and integers greater 
// than 231 - 1 should be rounded to 231 - 1. 
// Return the integer as the final result. 
// Input: s = " -042" 
// Output: -42 
// Explanation: 
// Step 1: "   -042" (leading whitespace is read and ignored) 
// Step 2: "   -042" ('-' is read, so the result should be negative) 
// Step 3: "   -042" ("042" is read in, leading zeros ignored in the result) 

import java.util.*;

public class Problem_39 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter string: ");
        String str = sc.nextLine();
        System.out.println(myAtoi(str));
    }

    public static int myAtoi(String s) {
        if (s == null && s.length() == 0) {
            return 0;
        }
        int i = 0, n = s.length();
        while (s.charAt(i) == ' ' && i < n) {
            i++;
        }
        if (i == n) {
            return 0;
        }
        int sign = 1;
        if (s.charAt(i) == '+') {
            sign = 1;
            i++;
        } else if (s.charAt(i) == '-') {
            sign = -1;
            i++;
        }

        long result = 0;
        while (i < n && Character.isDigit(s.charAt(i))) {
            int digit = s.charAt(i) - '0';
            result = result * 10 + digit;
            i++;
        }
        return (int) (sign * result);
    }

}

// public class MyAtoi {
// public static int myAtoi(String s) {
// if (s == null || s.length() == 0) return 0;

// int i = 0, n = s.length();
// // Step 1: skip leading whitespace
// while (i < n && s.charAt(i) == ' ') i++;

// if (i == n) return 0; // only whitespace

// // Step 2: handle optional sign
// int sign = 1;
// if (s.charAt(i) == '+') {
// sign = 1;
// i++;
// } else if (s.charAt(i) == '-') {
// sign = -1;
// i++;
// }

// // Step 3: read digits
// long result = 0; // use long to handle overflow during calculation
// while (i < n && Character.isDigit(s.charAt(i))) {
// int digit = s.charAt(i) - '0';
// result = result * 10 + digit;

// // Step 4: handle overflow
// if (sign * result > Integer.MAX_VALUE) return Integer.MAX_VALUE;
// if (sign * result < Integer.MIN_VALUE) return Integer.MIN_VALUE;

// i++;
// }

// return (int)(sign * result);
// }

// public static void main(String[] args) {
// String s1 = " -042";
// String s2 = "4193 with words";
// String s3 = "words and 987";
// String s4 = "-91283472332";

// System.out.println(myAtoi(s1)); // Output: -42
// System.out.println(myAtoi(s2)); // Output: 4193
// System.out.println(myAtoi(s3)); // Output: 0
// System.out.println(myAtoi(s4)); // Output: -2147483648
// }
// }

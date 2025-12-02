//  Given an integer n, return the nth digit of the infinite integer sequence [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, …]. 
// Input: n = 11 => Output: 0 
// Explanation: The 11th digit of the sequence 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, ... is a 0, which is part of the 
// number 10.


import java.util.*;

public class Problem_42 {

    public static int findNthDigit(int n) {
        long digitLength = 1; 
        long count = 9; 
        long start = 1; 

        while (n > digitLength * count) {
            n -= digitLength * count;
            digitLength++;
            count *= 10;
            start *= 10;
        }

        long number = start + (n - 1) / digitLength;

        String s = String.valueOf(number);
        int index = (n - 1) % (int) digitLength;

        return s.charAt(index) - '0';
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter n: ");
        int n = sc.nextInt();

        System.out.println("Nth digit is: " + findNthDigit(n));
    }
}
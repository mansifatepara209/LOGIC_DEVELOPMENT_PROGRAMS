// Given an array nums with n integers, your task is to check if it could become non-decreasing by modifying
// at most one element.
// Input: nums = [4,2,3]
// Output: true
// Explanation: You could modify the first 4 to 1 to get a non-decreasing array.

import java.util.Arrays;
import java.util.Scanner;

public class Problem_35 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter size: ");
        int n = sc.nextInt();
        int[] nums = new int[n];
        System.out.println("Enter elements:");
        for (int i = 0; i < n; i++) {
            nums[i] = sc.nextInt();
        }
        boolean flag = isNonDec(nums);
        System.out.println(flag);

    }
    static boolean isNonDec(int[] nums) {
        int count = 0;
        int n = nums.length;
        for (int i = 0; i < n - 1; i++) {
            if (nums[i] > nums[i + 1]) {
                count++;

                if (count > 1)
                    return false;
                if (i > 0 && nums[i - 1] > nums[i + 1]) {
                    System.out.println(i);
                    nums[i + 1] = nums[i];
                } else {
                    System.out.println(i);
                    nums[i] = nums[i + 1];
                }
                System.out.println(Arrays.toString(nums));
            }
        }
        return true;    
    }
}
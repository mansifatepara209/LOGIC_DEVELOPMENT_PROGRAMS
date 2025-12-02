// Write a Function that returns either 1 or 0 based on following condition if the array is in ascending order 
// and occurrence of that number at least 3 then it should return 1 otherwise it should return 0.  
// e.g. if A=[1,1,1,2,2] it should return 0, if A= [1,1,1,3,3,3,3] it should return 1. 

import java.util.Scanner;
import java.util.Arrays;

public class Problem_38 {
    public static int checkArray(int[] arr) {
        int n = arr.length;

        // Step 1: Check if array is sorted in ascending order
        for (int i = 0; i < n - 1; i++) {
            if (arr[i] > arr[i + 1]) {
                return 0;
            }
        }

        // Step 2: Count occurrences of each element
        int count = 1;
        for (int i = 1; i < n; i++) {
            if (arr[i] == arr[i - 1]) {
                count++;
            } else {
                if (count < 3) {
                    return 0;
                }
                count = 1;
            }
        }
        if (count < 3) {
            return 0;
        }
        return 1;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter array size: ");
        int n = sc.nextInt();

        int arr[] = new int[n];
        System.out.println("Enter elements of the array: ");
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        int result = checkArray(arr);
        System.out.println("Result: " + result);
        System.out.println("Result: " + (result == 1 ? "Condition Satisfied" : "Condition Not Satisfied"));
    }
}